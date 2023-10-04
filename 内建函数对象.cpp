//#include<iostream>
//#include<vector>
//#include<map>
//#include<list>
//#include<algorithm>
//#include<functional>//内建函数对象头文件
//using namespace std;
////negate是一元运算 其他运算符运算都是二元运算
////negate还是取反仿函数
////这是算术仿函数
//void test1()
//{
//	negate<int>n;
//
//	cout << n(50) << endl;
//}
////二元 加法
//void test2()
//{
//	plus<int>p;
//
//	cout << p(10, 20) << endl;
//}
////关系仿函数 等于不等于 大于等于小于等于
//
//class mycom
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//	mycom();
//	~mycom();
//
//private:
//
//};
//
//mycom::mycom()
//{
//}
//
//mycom::~mycom()
//{
//}
//void test3()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(50);
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	//降序
//	sort(v.begin(),v.end(), greater<int>());//本来就有了这个仿函数 实例化
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//
//}
////逻辑仿函数 主要实现逻辑运算
//void test4()
//{
//	vector<bool>v;
//	v.push_back(true);
//	v.push_back(false);
//	v.push_back(true);
//	v.push_back(false);
//	v.push_back(true);
//	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//利用逻辑非 把容器v搬运到容器v2中 并执行取反操作
//	vector<bool>v2;
//	v2.resize(v.size());//提前开辟空间
//	transform(v.begin(), v.end(), v2.begin(),logical_not<bool>());
//	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test5()
//{
//
//}
//void test6()
//{
//
//}
//void test7()
//{
//
//}
//void test8()
//{
//
//}
//void test9()
//{
//
//}
//
//int main()
//{
//	test4();
//}