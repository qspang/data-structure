//#include<iostream>
//#include<algorithm>
//#include<set>
//using namespace std;
////插入数据的时候自动排好顺序
////set不允许有重复的容器
////但是multiset允许有重复元素
//void print(set<int>s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	set<int> s1;
//	//插入数据的方式只有insert
//	s1.insert(10);
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(30);
//	//遍历容器
//	//容器特点 所有容器插入时自动排序
//	//set不允许插入重复
//	print(s1);
//	set<int>s2(s1);
//	print(s2);
//
//
//}
////大小
//void test2()
//{
//	set<int> s1;
//	//插入数据的方式只有insert
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(30);
//	print(s1);
//
//	if (s1.empty())
//	{
//		cout << "kong" << endl;
//	}
//	else
//	{
//		cout << "s1不为空" << endl;
//		cout << "元素个数" << s1.size() << endl;
//	}
//}
////交换
//void test3()
//{
//	set<int> s1;
//	//插入数据的方式只有insert
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(30);
//
//	
//
//	set<int> s2;
//	//插入数据的方式只有insert
//	s2.insert(100);
//	s2.insert(200);
//	s2.insert(400);
//	s2.insert(300);
//
//	cout << "交换前" << endl;
//	print(s1);
//	print(s2);
//
//	s1.swap(s2);
//
//	cout << "交换后" << endl;
//	print(s1);
//	print(s2);
//
//}
////插入和删除 insert erase clear 
//void test4()
//{
//	set<int> s1;
//	//插入数据的方式只有insert
//	s1.insert(100);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(30);
//
//	//遍历
//	print(s1);
//
//	//删除
//	s1.erase(s1.begin());
//	print(s1);
//	//指定目标删除
//	s1.erase(30);
//	print(s1);
//
//	s1.erase(s1.begin(), s1.end());
//	print(s1);
//
//	s1.clear();
//	print(s1);
//
//}
////查找 和 统计
//void test5()
//{
//	set<int> s1;
//	//插入数据的方式只有insert
//	s1.insert(100);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(30);
//}
//void test6()
//{
//	set<int> s1;
//	//插入数据的方式只有insert
//	s1.insert(100);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(30);
//
//	set<int>::iterator pos = s1.find(30);
//	if (pos != s1.end())
//	{
//		cout << "you" << endl;
//	}
//	else
//	{
//		cout << "kong" << endl;
//	}
//}
//void test7()
//{
//	set<int> s1;
//	//插入数据的方式只有insert
//	s1.insert(100);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(30);
//
//	int num = s1.count(30);
//	//对于统计的set 结果只能是0和1
//	cout << "num=" << num << endl;
//}
//void test8()
//{
//	set<int>s;
//	//pair里面放的是迭代器
//	pair<set<int>::iterator, bool>ret = s.insert(10);
//
//	if (ret.second)
//	{
//		cout << "第一次插入成功" << endl;
//	}
//	else
//	{
//		cout << "第1次插入失败" << endl;
//	}
//
//	ret = s.insert(10);
//	if (ret.second)
//	{
//		cout << "第2次插入成功" << endl;
//	}
//	else
//	{
//		cout << "第二次插入失败" << endl;
//	}
//	multiset<int>ms;
//	ms.insert(10);
//	ms.insert(10);
//	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
//	{
//		cout << *it << endl;
//	}
//	cout << endl;
//
//}
////pair对组创建  利用对组可以返回两个数据
//void test9()
//{
//	//第一种方式
//	pair<string, int>p("Tom", 20);
//	cout << "姓名" << p.first << "年龄" << p.second << endl;
//
//	//第二种方式
//	pair<string, int>p2 = make_pair("jerry", 30);
//	cout << "姓名" << p2.first << "年龄" << p2.second << endl;
//
//
//}
////利用仿函数来改变排序规则
//class Person
//{
//public:
//	//第一个括号重载的是（）第二个（）是参数列表
//	bool operator()( int v1, int v2)const
//	{
//		return v1 > v2;
//	}
//	
//
//
//};
//
//
//
//void test10()
//{
//	set<int> s1;
//	//插入数据的方式只有insert
//	s1.insert(100);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(10);
//	print(s1);
//
//	//指定规则从大到小 仿函数是一个类型 所以要写一个class
//	set<int,Person> s2;
//	//插入数据的方式只有insert
//	s2.insert(100);
//	s2.insert(20);
//	s2.insert(40);
//	s2.insert(30);
//	s2.insert(10);
//	for (set<int, Person>::iterator it = s2.begin(); it != s2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//}
////存放自定义的数据类型来改变顺序、c
//class person
//{
//public:
//	person(string name,int age);
//	string mname; int mage;
//
//};
//
//person::person(string name,int age)
//{
//	this->mage = age;
//	this->mname = name;
//}
//
//
//class mycom
//{
//public:
//	//不加最后面那个const必报错
//	bool operator()( const person&p1,  const person&p2)const
//	{
//		//按年龄降序
//		return p1.mage > p2.mage;
//	}
//
//private:
//
//};
//
//
//void test11()
//{
//	//自定义数据类型 都会指定排序规则
//	set<person,mycom>s;
//
//	person p1("关羽", 24);
//	person p2("刘备", 28);
//	person p3("张飞", 25);
//	person p4("赵云", 21);
//
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//
//	for (set<person,mycom>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << it->mname << it->mage << endl;
//	}
//
//
//}
//void test12()
//{
//
//}
//void test13()
//{
//
//}
//void test14()
//{
//
//}
//
//int main()
//{
//	test11();
//}