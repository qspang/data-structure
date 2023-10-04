//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
///// <summary>
///// STL 容器 算法 和 迭代器
///// 容器和算法通过迭代器无缝衔接
///// STL采用了模板类和模板函数
///// 六大组件 容器 算法 迭代器 仿函数 适配器 空间适配器
///// </summary>
///// <returns></returns>
///// 
///// vector 从存放内置数据类型
///// 
//void print(int val)
//{
//	cout << val << endl;
//}
//void test01()
//{
//	//创建了一个vector容器 数组
//	vector<int> v;
//
//	//向容器中处插入数据
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	//通过迭代器访问容器的数据
//	vector<int>::iterator itBegin = v.begin();//起始迭代器 指向容器的第一个元素
//	vector<int>::iterator itEnd = v.end();//结束迭代器 指向容器中最后一个元素的下一个
//
//
//	/*while (itBegin != itEnd)
//	{
//		cout << *itBegin << endl;
//		itBegin++;
//	}*/
//	/*for (vector<int>::iterator it = v.begin(); it != v.end();it++)
//	{
//		cout << *it << endl;
//	}*/
//	//利用STL的算法
//	for_each(v.begin(), v.end(), print);
//}
///// <summary>
///// 存放自定义类型
///// </summary>
///// <returns></returns>
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->myname = name;
//		this->myage = age;
//	}
//	string myname;
//	int myage;
//};
//void test02()
//{
//	vector<Person>v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//
//	//遍历  it是一个指针
//	for(vector<Person>::iterator it=v.begin();it!=v.end();it++)
//    {
//		cout << "姓名" << (*it).myname << "年龄" << (*it).myage << endl;
//		cout << "姓名" << it->myname << "年龄" << it->myage << endl;
//
//	}
//
//}
//void test03()
//{
//	vector<Person*>v;
//	//说明现在是星类储存 即是地址
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//	//尾插法
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	//(*it)指的就是vector里面的那个东西
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << (*it)->myname << (*it)->myage << endl;
//	}
//
//}
////vector嵌套容器 二维数组
//void test04()
//{
//	vector<vector<int>>v;
//
//	vector<int>v1;
//	vector<int>v2;
//	vector<int>v3;
//	vector<int>v4;
//	for (int i = 0; i < 4; i++)
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//	}
//
//
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//(*it)是vector<int>（是个容器）就看括号里面的是什么类型 是个容器就是个容器
//		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
//		{
//			cout << *vit << " ";
//		}
//		cout << endl;
//	}
//
//}
//
////vector动态数组 动态扩展  并不是在原来的空间接新空间 
////而是去找更大的内存空间 把原来的数据拷贝在心底空间上面
//void printv(vector<int>v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test5()
//{
//	vector<int> v1;//默认构造 无参构造
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printv(v1);
//
//	//通过区间方式进行构造
//	vector<int>v2(v1.begin(), v1.end());
//	printv(v2);
//
//	//n个elem方式构造  第一个是个数 第二个是元素
//	vector<int>v3(10, 100);
//	printv(v3);
//
//	//拷贝构造
//	vector<int>v4(v3);
//	printv(v4);
//}
////vector的赋值
//void test6()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printv(v1);
//	//构造赋值
//	vector<int>v2;
//	v2 = v1;
//	printv(v2);
//	//assign
//	vector<int>v3;
//	v3.assign(v1.begin(), v1.end());
//	printv(v3);
//	//和刚才的构造不一样 这个是赋值
//	vector<int>v4;
//	v4.assign(10, 100);
//
//
//}
////vector 容量和大小的操作
//void test7()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printv(v1);
//
//	if (v1.empty())
//	{
//		cout << "v1为空" << endl;
//	}
//	else
//	{
//		cout << "v1不为空" << endl;
//		cout << "v1容量为" << v1.capacity() << endl;
//		cout << "v1的大小为" << v1.size() << endl;
//	}
//
//	//重新指定大小
//	v1.resize(15);//利用重载版本 可以指定默认填充
//	printv(v1);//如果重新指定的比原来长 则默认用0填充新的位置
//
//	v1.resize(5);//超出来就删除掉
//	printv(v1);
//}
////vector的插入和删除
//void test8()
//{
//	//填入迭代器 
//	vector<int>v1;
//	//尾插法
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	//遍历
//	printv(v1);
//
//	//尾删 pop_back
//	v1.pop_back();
//	printv(v1);
//
//	//插入
//	v1.insert(v1.begin(), 100);
//	printv(v1);
//
//	v1.insert(v1.begin(), 2, 1000);
//	printv(v1);
//
//	v1.erase(v1.begin());
//	printv(v1);
//
//	v1.erase(v1.begin(), v1.end());
//	printv(v1);
//
//
//}
////vector存取操作
//void test9()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1.at(i) << " ";
//	}
//	cout << endl;
//
//	//获取第一个元素
//	cout << "第一个元素" << v1.front() << endl;
//
//	//获取最后一个
//	cout << "最后一个为" << v1.back() << endl;
//
//}
////互换容器 基本使用
//void test10()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printv(v1);
//
//	vector<int>v2;
//	for (int i = 10; i > 0; i--)
//	{
//		v2.push_back(i);
//	}
//	printv(v2);
//
//	cout << "交换后：" << endl;
//	v1.swap(v2);
//	printv(v1);
//	printv(v2);
//}
////交换的实际用途
//void test11()
//{
//	vector<int>v;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//	}
//	cout << "v的容量" << v.capacity() << endl;
//	cout << "v的大小" << v.size() << endl;
//
//	v.resize(3);
//
//	cout << "v的大小" << v.size() << endl;
//
//	//巧用swap去收缩内存(可能是之前开辟多了）
//	vector<int>(v).swap(v);
//	cout << "v的容量" << v.capacity() << endl;
//	cout << "v的大小" << v.size() << endl;
//
//}
////vector预留空间 减少vector在动态扩展容量是的扩展次数
//void test12()
//{
//	vector<int>v;
//
//	//利用reserve去开辟空间
//	v.reserve(100000);
//
//	int num = 0;//统计开辟次数
//	int* p = NULL;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//		if (p != &v[0])//首地址
//		{
//			p = &v[0];
//			num++;
//		}//每次不够用就要开辟 然后原来p指向首地址 但因为开辟了所以不指向了 因此据此统计
//	}
//	cout << "num=" << num;
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
//
//	test12();
//}