//#include<iostream>
//#include<algorithm>
//#include<queue>
//
//using namespace std;
////先进先出
////push入队  pop出队
////只有队头和队尾才能被外界访问 所以不允许有遍历行为
//class Person
//{
//public:
//	Person(string name, int age);
//	~Person();
//
//	string mname;
//	int mage;
//};
//
//Person::Person(string name,int age)
//{
//	this->mname = name;
//	this->mage = age;
//}
//
//Person::~Person()
//{
//}
//void test1()
//{
//	//这样用的依据就是模板
//	queue<Person>q;
//
//	//实例化
//	Person p1("唐僧",30);
//	Person p2("孙悟空", 1000);
//	Person p3("猪八戒", 90);
//	Person p4("沙僧", 80);
//
//	//入队
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//
//	while (!q.empty())
//	{
//		//查看对头
//		cout << "队头元素---姓名：" << q.front().mname << q.front().mage << endl;
//
//
//		//队尾
//		cout<<"队尾--"<< q.back().mname << q.back().mage << endl;
//
//		q.pop();
//	}
//	cout << "queue的大小" << q.size() << endl;
//}
//int main()
//{
//	test1();
//}