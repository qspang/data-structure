#include"Linkstack.h"
using namespace std;
#include<iostream>
linkstack *init_linkstack() {
	linkstack* stack = new linkstack;
	stack->head.next = NULL;
	stack->size = 0;
	return stack;
}
//初始化函数
void push_linkstack(linkstack* stack, linknode* data) {
	if (stack == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}
	data->next = stack->head.next;
	stack->head.next = data;
	stack->size++;
	//尾插法

}
//入栈


void pop_linkstack(linkstack* stack) {
	if (stack == NULL)
	{
		return;
	}
	if (stack->size == 0)
	{
		return;
	}
	//第一个有效结点
	linknode* pnext = stack->head.next;
	stack->head.next = pnext->next;
}
// 出栈


linknode *top_linkstack(linkstack* stack){
	if (stack == NULL)
	{
		return NULL;
	}
	if (stack->size == 0)
	{
		return NULL;
	}
	return stack->head.next;
}
// 返回栈顶元素
int size_linkstack(linkstack* stack) {
	if (stack == NULL)
	{
		return -1;
	}
	return stack->size;
}
// 返回栈顶个数
void clear(linkstack* stack) {
	if (stack == NULL) {
		return;
	}
	stack->head.next = NULL;
	stack->size = 0;
}
// 清空栈
void free_link(linkstack* stack) {
	if (stack == NULL) {
		return;
	}
	free(stack);
}
// 销毁栈