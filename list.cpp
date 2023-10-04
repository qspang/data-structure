//#include<iostream>
//#include<algorithm>
//#include<list>
//using namespace std;
////可以对任意位置进行快速插入或删除
////占用空间大 遍历速度慢 没有数组快
////STL中list是双向迭代器 也是一个双向链表
////list和vector都要熟练 根据不同的优缺点来使用不同的容器
//void print(const list<int>&L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	list<int>L1;//默认构造
//
//	//
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	print(L1);
//	//区间方式
//	list<int>L2(L1.begin(), L1.end());
//	print(L2);
//
//	//拷贝构造
//	list<int>L3(L2);
//	print(L3);
//
//	list<int>L4(10, 1000);
//	print(L4);
//
//
//}
///// <summary>
///// 赋值操作
///// </summary>
//void test2()
//{
//	list<int>L1;
//
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	print(L1);
//
//	list<int>L2;
//	L2 = L1;
//	print(L2);
//
//	list<int>L3;
//	L3.assign(L2.begin(), L2.end());
//
//	list<int>L4;
//	L4.assign(10, 1000);
//	print(L4);
//
//}
////交换
//void test3()
//{
//	list<int>L1;
//
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	list<int>L2;
//	L2.assign(10, 1000);
//
//	cout << "交换前" << endl;
//	print(L1); print(L2);
//
//	L1.swap(L2);
//	cout << "交换后" << endl;
//	print(L1); print(L2);
//}
////容器大小的操作 容器容量的展示 超了默认填充 短了就删除
//void test4()
//{
//	list<int>L1;
//
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	//判断容器是否为空
//	if (L1.empty())
//	{
//		cout << "KONG" << endl;
//	
//	}
//	else
//	{
//		cout << "L1不为空" << endl;
//		cout << "L1的元素不为空为" << L1.size() << endl;
//	}
//	//重新制定大小
//	L1.resize(10,10000);
//	print(L1);
//
//	L1.resize(2);
//	print(L1);
//}
//void test5()
//{
//	list<int>L1;
//
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//
//	L1.push_front(100);
//	L1.push_front(200);
//	L1.push_front(300);
//
//	//100 
//	print(L1);
//	//尾删
//	L1.pop_back();
//	print(L1);
//	//头删
//	L1.pop_front();
//	print(L1);
//	//insert插入
//	list<int>::iterator it = L1.begin();
//	L1.insert(++it, 1000);
//	print(L1);
//
//	//删除 提供迭代器
//	it = L1.begin();
//	L1.erase(++it);
//	print(L1);
//
//	//移除   填入具体元素
//	L1.push_back(10000);
//	print(L1);
//	L1.remove(10000);
//	print(L1);
//	L1.clear();
//	print(L1);
//}
////数据存取
//void test6()
//{
//	list<int> L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	//没有中括号 没有重载这种符号
//	//也没有at
//	//原因是list本质是链表 不是用连续线性空间储存数据迭代器也是不支持随机访问的
//
//	cout << "第一个元素" << L1.front() << endl;
//	cout << "最后一个元素" << L1.back() << endl;
//
//	print(L1);
//
//	//验证迭代器是不支持随机访问的
//	list<int>::iterator it = L1.begin();
//	it++;//支持双向变化
//	//但是不支持随机访问的 不可以   +1
//
//
//
//
//
//
//}
///// <summary>
///// 反转和排序  reverse  和  sort
///// </summary>
//void test7()
//{
//	list<int> L1;
//	L1.push_back(100);
//	L1.push_back(20);
//	L1.push_back(3);
//	L1.push_back(40);
//	L1.push_back(409);
//	print(L1);
//
//	L1.reverse();
//	cout << "反转后" << endl;
//	print(L1);
//
//}
//bool mycompare(int v1,int v2)
//{
//	//降序 就让第一个数大于第二个数
//	return v1 > v2;
//}
//void test8()
//{
//	list<int> L1;
//	L1.push_back(100);
//	L1.push_back(20);
//	L1.push_back(3);
//	L1.push_back(40);
//	L1.push_back(409);
//	cout << "排序前" << endl;
//	print(L1);
//	//不支持随机访问的不能用sort
//	//不知随机访问的迭代器的容器 内部会提供对应的算法
//	L1.sort();
//	cout << "排序后" << endl;
//	print(L1);
//
//	//降序
//	L1.sort(mycompare);
//	print(L1);
//}
//
//
///// <summary>
///// 排序案例
///// </summary>
//class Person
//{
//public:
//	Person(string name,int age,int height);
//	~Person();
//
//	string mname; int mage; int mheight;
//};
//
//Person::Person(string name, int age, int height)
//{
//	this->mage = age;
//	this->mheight = height;
//	this->mname = name;
//}
//bool com(Person &p1,Person &p2)
//{
//	//按照年龄升序
//	if (p1.mage == p2.mage)
//	{
//		return p1.mheight < p2.mheight;
//	}
//	return p1.mage < p2.mage;
//}
//Person::~Person()
//{
//}
//void test9()
//{
//	list<Person>l;
//	Person p1("刘备", 35, 175);
//	Person p2("曹操", 36, 176);
//	Person p3("孙权", 37, 177);
//	Person p4("赵云", 38, 171);
//	Person p5("张飞", 35, 179);
//	Person p6("关羽", 30, 170);
//
//	//插入数据
//	l.push_back(p1);
//	l.push_back(p2);
//	l.push_back(p3);
//	l.push_back(p4);
//	l.push_back(p5);
//	l.push_back(p6);
//
//	for (list<Person>::iterator it = l.begin(); it != l.end(); it++)
//	{
//		cout << "姓名" << (*it).mname << "年龄" << (*it).mage << "身高" << (*it).mheight << endl;
//	}
//
//	cout << "----------------------";
//	cout << "排序后" << endl;
//	//多数据的排序要指定他的排序规则
//	l.sort(com);
//	for (list<Person>::iterator it = l.begin(); it != l.end(); it++)
//	{
//		cout << "姓名" << (*it).mname << "年龄" << (*it).mage << "身高" << (*it).mheight << endl;
//	}
//}
//
//int main()
//{
//	test9();
//}