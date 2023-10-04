//#include<iostream>
//#include<vector>
//#include<map>
//#include<list>
//using namespace std;
//class myadd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;
//	}
//	myadd();
//	~myadd();
//
//private:
//
//};
//
//
////函数对象在使用的时候也可以向普通函数那样调用 可以有参数
//void test1()
//{
//	myadd madd;
//	cout << madd(10, 10) << endl;
//}
//class myprint
//{
//public:
//	myprint()
//	{
//		this->count = 0;
//	}
//	~myprint();
//	void operator()(string test)
//	{
//		cout << test << endl;
//		this->count++;
//	}
//	int count;//内部状态
//private:
//
//};
////函数对象可以有自己的状态
//void test2()
//{
//	myprint mprint;
//	mprint("Hello world");
//	mprint("Hello world");
//	mprint("Hello world");
//	mprint("Hello world");
//	cout << "myprint" << mprint.count << endl;
//}
////函数对象作为参数进行传递
//void doprint(myprint &mp,string test)
//{
//
//}
//void test3()
//{
//	myprint mprint;
//	doprint(mprint, "hello c++");
//}
//int main()
//{
//	test3();
//}