#pragma once
#ifndef DANYMIC_H
#define DANYMIC_H
//动态增长内存 策略 将存放数据的内存放在堆上 
//直接用capacity开辟好内存 免得一直在开辟
//size概念 记录当前数组具体的元素个数

//动态数组结构体定义完了
typedef struct danymic {
	int* p;//存放数据的地址
	int size;//当前有多少个元素
	int capacity;//容量 我容器当前能够容纳最大的元素
}darr;


//写一系列对这个danymic的结构体操作的函数
//初始化
//参数里面数组传进去就是首地址 就是*
darr* da();
//插入
void push_back_arr(darr* arr, int value);
//删除
void remove_arr(darr* arr, int pos);
//根据值删除
void removebyvalue(darr* arr, int value);
//查找
int findarr(darr* arr, int value);
//打印
void print(darr* arr);
//释放动态数组的内存
void freespace(darr* arr);

//清空数组
void cleararr(darr* arr);
int capacityarr(darr* arr);
int sizearr(darr* arr);
int atarr(darr* arr, int pos);


#endif // danymic
