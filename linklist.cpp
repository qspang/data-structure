#include"LINKLIST.h"
#include<iostream>
using namespace std;
//打印函数指针
typedef void(*PRINTLINKNODE)(void*);



//初始化链表
linklist* init_linklist()
{
	linklist* list = (linklist*)malloc(sizeof(linklist));
	list->size = 0;

	//头结点是不保存数据信息的
	list->head = (linknode*)malloc(sizeof(linknode));
	list->head->data = NULL;
	list->head->next = NULL;
	return list;
}
//在指定位置插入
void insert_linklist(linklist* list, int pos, void* data) {
	if (list == NULL)
	{
		return;

	}
	if (data == NULL)
	{
		return;

	}
	//友好处理，posyuejie
	if (pos<0 || pos>list->size)
	{
		pos = list->size;
	}
	//创建新的结点
	linknode* newnode = (linknode*)malloc(sizeof(linknode));
	newnode->data = data;
	newnode->next = NULL;

	//重点！！！！通过pos结合for循环去找出来 目前指针的位置
	linknode* pcurrent = list->head;
	for (int i = 0; i < pos; i++)
	{
		pcurrent = pcurrent->next;
	}
	//新结点入链表
	newnode->next = pcurrent->next;
	pcurrent->next = newnode;
	list->size++;
}
//删除指定位置的值
void delete_linklist(linklist* list, int pos) {
	if (list == NULL)
	{
		return;
	}
	if (pos < 0 || pos >= list->size)
	{
		return;
	}
	//查找删除结点的前一个结点
	linknode* pcurrent = list->head;
	for (int i = 0; i < pos; i++)
	{
		pcurrent = pcurrent->next;
	}
	//缓存删除的结点
	linknode* pdel = pcurrent->next;
	pcurrent->next = pdel->next;
	free(pdel);
	list->size--;
}
//获得长度
int size_linklist(linklist* list) {
	return list->size;
}
//返回第一个结点的位置
void* front_linklist(linklist* list) {
	return list->head->next->data;
	//next是一个node就是一个结点的意思 而data才是我们想要的
}
//释放链表内存
void freespace_linklist(linklist* list) {
	if (list == NULL)
	{
		return;
	}
	//辅助指针变量
	linknode* pcurrent = list->head;
	while (pcurrent != NULL)
	{
		//缓存下一个结点
		linknode* pnext = pcurrent->next;
		free(pcurrent);
		pcurrent = pnext;

	}
	list->size = 0;
	free(list);
}

void myprint(void* data)
{
	person* p = (person*)data;
	
	cout << "name:" << p->name << "age:" << p->age << "score:" << p->score;
	cout << endl;
}
//查找元素
int find_linklist(linklist* list, void* data) {
	if (list == NULL)
	{
		return -1;
	}
	if (data == NULL)
	{
		return -1;
	}
	//遍历查找
	linknode* pcurrent = list->head->next;
	int i = 0;
	while (pcurrent != NULL)
	{
		if (pcurrent->data == data)
		{
			break;
		}
		i++;
		pcurrent = pcurrent->next;
	}
	return i;
}
//打印链表结点
void print_linklist(linklist* list, PRINTLINKNODE print) {
	if (list == NULL)
	{
		return;
	}
	//辅助指针变量
	linknode* pcurrent = list->head->next;
	while (pcurrent != NULL)
	{
		print(pcurrent->data);
		pcurrent = pcurrent->next;
	}

}
//返回值是个void 类型 参数是个 void *函数类型
