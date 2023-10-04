//#include<iostream>
//#include<deque>
//#include<algorithm>
//using namespace std;
////deque头插很方便 双端数组
////中控器
////访问数据速度不如vector
////deque依然支持随机访问
//
//void print(const deque<int> &d)
//{
//	//iterator也要特殊一点了
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		//*it = 100;现在不可以修改了
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	print(d1);
//
//	deque<int>d2(d1.begin(), d1.end());
//	print(d2);
//
//	deque<int>d3(10, 1000);
//	print(d3);
//
//	deque<int>d4(d3);
//	print(d4);
//}
//void test2()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	print(d1);
//
//	deque<int>d2;
//	d2 = d1;
//	print(d2);
//
//	//assign赋值
//	deque<int>d3;
//	d3.assign(d1.begin(), d1.end());
//	print(d3);
//
//	deque<int>d4;
//	d3.assign(10, 100);
//	print(d4);
//}
//void test3()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	print(d1);
//
//	if (d1.empty())
//	{
//		cout << "true" <<endl;
//	}
//	else
//	{
//		cout << "false" << endl;
//		cout << "d1的大小" << d1.size() << endl;
//
//		//deque容器没有容量的概念
//	}
//
//	//重新指定大小
//	d1.resize(15, 1);
//	print(d1);
//
//	d1.resize(3);
//	print(d1);
//}
////deque容器插入和删除 提供的位置一定是迭代器
//void test4()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	print(d1);
//
//	//头插
//	d1.push_front(100);
//	d1.push_front(200);
//	print(d1);
//
//	//尾删
//	d1.pop_back();
//	print(d1);
//
//	//头删
//	d1.pop_front();
//	print(d1);
//}
//void test5()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//
//	d1.push_front(100);
//	d1.push_front(200);
//	print(d1);
//
//	d1.insert(d1.begin(), 1000);
//	print(d1);
//
//	d1.insert(d1.begin(), 2, 10000);
//	print(d1);
//
//	deque<int>d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//
//	d1.insert(d1.begin(), d2.begin(), d2.begin());
//	print(d1);
//
//
//
//}
////删除
//void test6()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//
//	d1.push_front(100);
//	d1.push_front(200);
//
//
//	deque<int>::iterator it = d1.begin();
//	it++;
//	d1.erase(it);
//	print(d1);
//
//	d1.erase(d1.begin(), d1.end());//相当于clear
//	print(d1);
//
//}
////数据存取操作 有back 有 front 有at
//void test7()
//{
//	deque<int>d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_back(30);
//	d.push_front(40);
//	d.push_front(60);
//	d.push_front(50);
//
//	for (int i = 0; i < 6; i++)
//	{
//		cout << d[i] << " ";
//	}
//	//通过at方式访问
//	for (int i = 0; i < d.size(); i++)
//	{
//
//		cout << d.at(i) << " ";
//	}
//	cout << endl;
//	cout << "第一个元素" << d.front();
//	cout << "最后一个元素" << d.back();
//
//}
////deque的排序  sort(iterator beg,iterator end)
//void test8()
//{
//	deque<int>d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_back(30);
//	d.push_front(100);
//	d.push_front(200);
//	d.push_front(300);
//	print(d);
//	//排序 默认排序规则 从小到大
//	//对于支持随机访问的迭代器 都可以利用sort算法直接对其进行排序
//	//vector容器也可以利用sort进行排序
//	sort(d.begin(), d.end());
//	print(d);
//
//}
//int main()
//{
//	test8();
//}