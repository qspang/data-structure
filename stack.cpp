//#include<iostream>
//#include<algorithm>
//#include<stack>
//using namespace std;
////先进后出
////栈不允许遍历的行为
////栈可以判断容器是否为空
////栈可以返回元素个数
//void test1()
//{
//	//特点 符合先进后出
//	stack<int>s;
//
//	//入栈
//	s.push(10);
//	s.push(20);
//	s.push(30);
//	s.push(40);
//	cout << "栈的大小" << s.size() << endl;
//
//	//只要栈不为空 就查看栈顶 并且执行出栈操作
//	while (!s.empty())
//	{
//		//查看栈顶元素
//		cout << "栈顶元素" << s.top() << endl;
//
//		s.pop();
//	}
//	cout << "栈的大小" << s.size() << endl;
//
//}
//int main()
//{
//	test1();
//}