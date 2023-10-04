//#include<iostream>
//#include<vector>
//#include<map>
//#include<list>
//#include<algorithm>
//using namespace std;
////operator接受一个参数叫做一元谓词
////operator接受两个参数叫做二元谓词
//class dayuwu
//{
//public:
//	vector<int>v;
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//	dayuwu();
//	~dayuwu();
//
//private:
//
//};
//
//dayuwu::dayuwu()
//{
//}
//
//dayuwu::~dayuwu()
//{
//}
//void test1()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	//查找容器中有没有大于5的数字
//	//dayuwu()匿名函数对象
//	vector<int>::iterator it=find_if(v.begin(), v.end(), dayuwu());//第三个参数要填入谓词
//	if (it == v.end())
//	{
//		cout << "no" << endl;
//	}
//	else
//	{
//		
//		cout << "yes" << *it<<endl;
//		
//	}
//
//
//
//}
////二元谓词
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
//void test2()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	sort(v.begin(), v.end());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	cout << "_------------------" << endl;
//	//使用函数对象 改变算法策略 变为排序规则从大到小
//	sort(v.begin(), v.end(), mycom());//加上这个括号才是匿名的函数对象
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	test2();
//}