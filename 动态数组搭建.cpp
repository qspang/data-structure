#include<iostream>
#include"danymic.h"
using namespace std;
//动态数组初始化
darr* da() {

	darr* myarr = (darr*)malloc(sizeof(darr));
	//在前面的darr*表明的是返回darr类型 maloc表明的是 分配一下darr类型的内存
	//初始化
	myarr->size = 0;
	myarr->capacity = 20;
	myarr->p = (int*)malloc(sizeof(int) * myarr->capacity);
	//相当于返回了一个数组 开辟了某些指针类的东西
 	return myarr;

}



//插入

void push_back_arr(darr* arr, int value) {
	//判断空间是否足够
	if (arr->size == arr->capacity)
	{
		//第一步 申请一块更大的内存空间 新空间是旧空间的2倍
		int* newspace = (int*)malloc(sizeof(int) * arr->capacity * 2);
		//第二部拷贝数据到新的空间
		memcpy(newspace, arr->p, arr->capacity * sizeof(int));//无论是开辟新的空间 分配空间 还是拷贝都是一个一个字节来的
		//释放旧空间的内存
		free(arr->p);
		//更新容量 更新新的地址空间
		arr->capacity = arr->capacity * 2;
		arr->p = newspace;

	}
	//插入新元素
	arr->p[arr->size] = value;
	arr->size++;
}
//删除
void remove_arr(darr* arr, int pos) {
	if (arr == NULL)
	{
		return;
	}
	//判断位置是否有效
	if (pos < 0 || pos >= arr->size)
	{
		return;
	}
	//删除元素
	for (int i = pos; i < arr->size-1; i++)
	{
		arr->p[i] = arr->p[i + 1];
	}
	arr->size--;
}
//根据值删除第一次的位置
void removebyvalue(darr* arr, int value) {
	if (arr == NULL)
	{
		return;
	}
	//找到这个值的位置
	int pos = findarr(arr,value);
	/*for (int i = 0; i < arr->size; i++)
	{
		if (arr->p[i] == value)
		{
			pos = i;
			break;
		}
	}*/
	//根据位置删除
	remove_arr(arr, pos);


}
//查找
int findarr(darr* arr, int value) {
	if (arr == NULL)
	{
		return-1;
	}
	//查找
	int pos = -1;
	for (int i = 0; i < arr->size; i++)
	{
		if (arr->p[i] == value)
		{
			pos = i;
			break;
		}
	}
	return pos;
}
//打印
void print(darr* arr) {

	for (int i = 0; i < arr->size; i++)
	{
		cout << arr->p[i]<<" ";
	}
	cout << endl;

}
//释放动态数组的内存
void freespace(darr* arr) {

	if (arr == NULL)
	{
		return;
	}
	//先释放里面那块内存
	if (arr->p != NULL)
	{
		free(arr->p);
	}
	//再释放数组
	free(arr);
}
void cleararr(darr* arr) {

	if (arr == NULL)
	{
		return;
	}
	//p->空间
	arr->size = 0;
	//根据size来插进去 

}
int capacityarr(darr* arr) {
	if (arr == NULL)
	{
		return-1;
	}

	return arr->capacity;
}
int sizearr(darr* arr) {
	return 0;
}
int atarr(darr* arr, int pos) {
	if (arr == NULL)
	{
		return-1;
	}
	return arr->p[pos];
}

