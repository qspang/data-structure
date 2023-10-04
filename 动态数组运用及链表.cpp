#include<iostream>
#include"danymic.h"
//#include"LINKLIST.h"
#include"LINKQIYE.h"
using namespace std;
//void test1()
//{
//	//初始化动态数组
//	danymic* myarr = da();
//	//打印容量
//	cout << "容量为" << capacityarr(myarr) << endl;
//	cout << "数组大小" << sizearr(myarr) << endl;;
//	//插入元素
//	for (int i = 0; i < 30; i++)
//	{
//		push_back_arr(myarr, i);
//
//	}
//	cout << endl;
//	cout << "容量为" << capacityarr(myarr) << endl;
//	cout << "数组大小" << sizearr(myarr) << endl;
//	
//
//	//删除
//	remove_arr(myarr, 0);
//	removebyvalue(myarr, 27);
//
//	//查找5个位置
//	int pos = findarr(myarr, 5);
//	cout << "5的位置为:" << pos << endl;
//
//	//打印
//	print(myarr);
//	//销毁
//	freespace(myarr);
//}
//void test2()
//{
//	//创建链表
//	linklist* list = init_linklist();
//	//创建数据
//	person p1 = { "aaa",18,102 };
//	person p2 = { "bbb",19,108 };
//	person p3 = { "ccc",20,99 };
//	person p4 = { "ddd",16,100 };
//	person p5 = { "eee",28,101 };
//
//	//数据插入链表
//	insert_linklist(list, 0, &p1);
//	insert_linklist(list, 0, &p2);
//	insert_linklist(list, 0, &p3);
//	insert_linklist(list, 0, &p4);
//	insert_linklist(list, 0, &p5);//我们用的是void 类型的指针 目的是为了接受各种数据以及 传递时候只能传入空指针了
//
//	//打印
//	print_linklist(list, myprint);
//
//	//删除3
//	delete_linklist(list, 3);
//	
//	cout << "--------------------------" << endl;	
//	print_linklist(list, myprint);
//
//
//	//返回第一个结点
//	cout << "----------------------查找结果----------------------" << endl;
//	person*ret=(person*)front_linklist(list);
//	cout << "name:"<<ret->name << "age:"<<ret->age << "score"<<ret->score;
//
//
//	//销毁链表
//	freespace_linklist(list);
//
//}
void test3()
{
	linklist* list = init_linklist();
	person p1, p2, p3, p4, p5;
}
int main()
{
	test3();
	return 0;
}