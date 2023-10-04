//#include<iostream>
//#include<deque>
//#include<vector>
//#include<algorithm>
//#include<ctime>
//using namespace std;
//class Person
//{
//public:
//	string mname; int mscore;
//	Person(string name, int score)
//	{
//		this->mname = name;
//		this->mscore = score;
//	}
//};
//void create(vector<Person>& v)
//{
//	string nameseed = "abcde";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "选手";
//		name += nameseed[i];
//		int score = 0;
//
//		Person p(name, score);
//
//		v.push_back(p);
//	}
//}
//void setscore(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//将评委分数放进去deque
//		deque<int>d;
//		for (int i = 0; i < 10; i++)
//		{
//			int score = rand() % 41 + 60;
//			d.push_back(score);
//		}
//		
//		/*cout << " 姓名" << (*it).mname << "分数" <<endl;
//
//		for (deque<int>::iterator vit = d.begin(); vit != d.end(); vit++)
//		{
//			cout << *vit << " ";
//		}
//		cout<<endl;*/
//
//		//排序
//		sort(d.begin(), d.end());
//		//去除最高最低
//		d.pop_back();
//		d.pop_front();
//
//		//取平均分
//		int sum = 0;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			sum += *dit;
//		}
//
//		int avg = sum / d.size();
//
//		it->mscore = avg;
//
//	}
//}
//void show(vector<Person>&p)
//{
//	for (vector<Person>::iterator it = p.begin(); it != p.end(); it++)
//	{
//		cout << "姓名" << it->mname << "平均分：" << it->mscore << endl;
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	//1、创建五个选手
//	vector<Person>v;
//	create(v);
//
//	//测试
//	/*for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << " 姓名" << (*it).mname << "分数" << (*it).mscore << endl;
//	}*/
//	//2、给五个人打分
//	setscore(v);
//
//	show(v);
//	//3、显示最后得分
//}
