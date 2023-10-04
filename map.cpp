//#include<iostream>
//#include<algorithm>
//#include<map>
//#include<vector>
//#include "map.h"
//using namespace std;
////高性能高效率
//// 每个元素都是pair成双成对 起到索引的作用 第一个是key第二个元素是value
//// 所有元素都会根据元素的键值自动排序
//// map和multimap都是关联式容器 实现都是靠二叉树
//// map不允许重复的key值 但是允许重复的value
////
//void print(map<int, int>m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key=" << (*it).first << "value=" << it->second << endl;
//	}
//	cout << endl;
//	
//}
//void test1()
//{
//	//创建map容器
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(4, 40));
//
//	m.insert(pair<int, int>(3, 30));
//	print(m);
//
//	map<int, int>m2(m);
//	print(m2);
//
//	map<int, int>m3;
//	m3 = m2;
//	print(m3);
//
//}
////empty size swap
//void test2()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(4, 40));
//	m.insert(pair<int, int>(3, 30));
//	if (m.empty())
//	{
//		cout << "kong" << endl;
//	}
//	else
//	{
//		cout << "bu kong" << endl;
//		cout << "size=" << m.size() << endl;
//	}
//	
//	map<int, int>m2;
//	m2.insert(pair<int, int>(1, 10));
//	m2.insert(pair<int, int>(2, 110));
//	m2.insert(pair<int, int>(4, 402));
//	m2.insert(pair<int, int>(3, 305));
//
//	cout << "交换前" << endl;
//	print(m);
//	print(m2);
//
//
//	m.swap(m2);
//	cout << "交换后" << endl;
//	print(m);
//	print(m2);
//
//
//
//}
////插入和删除
//void test3()
//{
//	map<int, int>m;
//	//第一种
//	m.insert(pair<int, int>(1, 10));
//	//第二种 不用写模板参数
//	m.insert(make_pair(2, 20));
//	//第三章
//	m.insert(map<int, int>::value_type(3, 30));
//	//第四种 可以利用key来访问value
//	m[4] = 40;
//
//	cout << m[5] << endl;//如果没有的话 就会自动填充一个键值对
//
//	print(m);
//
//	m.erase(m.begin());
//	print(m);
//
//	m.erase(3);//按照key删除
//	print(m);
//
//	m.erase(m.begin(), m.end());
//
//}
////查找和统计 find count
//void test4()
//{
//
//}
////排序 改变它的排序规则
//class mycom
//{
//public:
//	bool operator()(int v1,int v2)const
//	{
//		//降序
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
//void test5()
//{
//	map<int, int,mycom>m;
//	m.insert(make_pair(1, 10));
//	m.insert(make_pair(2, 20));
//	m.insert(make_pair(3, 30));
//	m.insert(make_pair(4, 40));
//	m.insert(make_pair(5, 50));
//
//	for (map<int, int, mycom>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << it->first << it->second << endl;
//	}
//
//}
////员工分组
//class worker
//{
//public:
//	worker();
//	~worker();
//	string mname; int salary;
//private:
//
//};
//
//worker::worker()
//{
//}
//
//worker::~worker()
//{
//}
//#define CEHUA 0
//#define MEISHU 1
//#define YANFA 2
//void createw(vector<worker>&v)
//{
//	string nameseed = "abcdefghij";
//	for (int i = 0; i < 10; i++)
//	{
//		worker worker;
//		worker.mname = "员工";
//		worker.mname += nameseed[i];
//
//		worker.salary = rand() % 10000 + 10000;//10000~19999
//		v.push_back(worker);
//	}
//}
//void setgroup(vector<worker>v,multimap<int,worker>&m)
//{
//	for (vector<worker>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//产生随机部门的编号
//		int deptid = rand() % 3;
//		//将员工插入分组中
//		//key部门编号，value具体员工
//		m.insert(make_pair(deptid, *it));
//	}
//}
//void showworker(multimap<int, worker>& m)
//{
//	//0 A B C D F G
//	cout << "策划部门：" << endl;
//	multimap<int,worker>::iterator pos=m.find(CEHUA);
//	int count = m.count(CEHUA);//统计具体认识
//	int index = 0;
//	for (; pos != m.end()&&index<count; index++,pos++)
//	{
//		cout << "姓名" << pos->second.mname << "工资" << pos->second.salary << endl;
//
//	}
//	cout << "---------------" << endl;
//	cout << "美术部门：" << endl;
//	pos = m.find(MEISHU); index = 0;
//	for (; pos != m.end() && index < count; index++, pos++)
//	{
//		cout << "姓名" << pos->second.mname << "工资" << pos->second.salary << endl;
//
//	}
//	cout << "部门：" << endl;
//	cout << "---------------" << endl;
//	pos = m.find(YANFA); index = 0;
//	for (; pos != m.end() && index < count; index++, pos++)
//	{
//		cout << "姓名" <<  pos->second.mname << "工资" << pos->second.salary << endl;
//
//	}
//
//
//}
//int main()
//{
//	//创建员工类
//	vector<worker> vworker;
//	createw(vworker);
//
//	//2、员工分组
//	multimap<int, worker>mworker;
//	setgroup(vworker,mworker);
//
//	//3、显示员工
//	showworker(mworker);
//
//	/*for (vector<worker>::iterator it = vworker.begin(); it != vworker.end(); it++)
//	{
//		cout << "姓名" << it->mname << "工资" << it->salary << endl;
//	}*/
//	return 0;
//}