#include<iostream>
#include"LINKQIYE.h"
using namespace std;
//内核链表

//打印函数指针
typedef void(*PRINTLINKNODE)(linknode*);

//初始化链表
linklist* init_linklist()
{
	linklist* list = (linklist*)malloc(sizeof(linklist));
	list->head.next = NULL;
	list->size = 0;
	return list;

}
//在指定位置插入
void insert_linklist(linklist* list, int pos, linknode* data)
{
	if (list == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}
	if (pos < 0 || list->size)
	{
		pos = list->size;
	}
	//查找插入位置
	linknode* pcurrent =&(list->head);
	for (int i = 0; i < pos; i++)
	{
		pcurrent = pcurrent->next;
	}
	//插入新结点
	data->next = pcurrent->next;
	pcurrent->next = data;
	list->size++;
	//直接把data放进来 直接访问的就是next区域

}
//删除指定位置的值
void delete_linklist(linklist* list, int pos);
//获得长度
int size_linklist(linklist* list);
//返回第一个结点的位置
void* front_linklist(linklist* list);
//释放链表内存
void freespace_linklist(linklist* list)
{
	if (list == NULL)
	{
		return;
	}
	free(list);
}
//查找元素
int find_linklist(linklist* list, void* data);
//打印链表结点
void print_linklist(linklist* list, PRINTLINKNODE print)
{
	if (list == NULL)
	{
		return;
	}
	//辅助指针
	linknode* pcurrent = list->head.next;
	while (pcurrent != NULL)
	{
		print(pcurrent);
		pcurrent = pcurrent->next;
	}
}
//返回值是个void 类型 参数是个 void *函数类型


  















