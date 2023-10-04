#pragma once
#ifndef LINKLIST_H
#define LINKLIST_H
#include<iostream>
typedef struct Person {
	char name[64];
	int age;
	int score;
}person;

//链表结点
typedef struct LINKNODE {
	void*data;//无类型指针方便强制转换成为无类型指针
	struct LINKNODE* next;
} linknode;
//链表结构体
typedef struct Linklist {
	linknode* head;
	int size;//记载结点数目
	//不需要容量 根据需要去分配


}linklist;
//打印函数指针
typedef void(*PRINTLINKNODE)(void*);

//初始化链表
linklist* init_linklist();
//在指定位置插入
void insert_linklist(linklist* list, int pos, void* data);
//删除指定位置的值
void delete_linklist(linklist* list, int pos);
//获得长度
int size_linklist(linklist* list);
//返回第一个结点的位置
void* front_linklist(linklist* list);
//释放链表内存
void freespace_linklist(linklist* list);
//查找元素
int find_linklist(linklist* list,void*data);
//打印链表结点
void print_linklist(linklist* list, PRINTLINKNODE print);
//返回值是个void 类型 参数是个 void *函数类型

void myprint(void* data);

#endif // !LINKLIST_H

