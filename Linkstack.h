#ifndef LINKSTACK
#define LINKSTACK
//链式栈的结点
typedef struct Linknode {
	struct Linknode* next;
}linknode;
//链式栈
typedef struct Linkstack {
	Linknode head;
	int size;
}linkstack;

linkstack *init_linkstack();
//初始化函数
void push_linkstack(linkstack* stack, linknode* data);
//入栈
void pop_linkstack(linkstack* stack);
// 出栈
linknode *top_linkstack(linkstack* stack);
// 返回栈顶元素
int size_linkstack(linkstack* stack);
// 返回栈顶个数
void clear(linkstack* stack);
// 清空栈
void free_link(linkstack* stack);
// 销毁栈
// 
//
#endif // !LINKSTACK

