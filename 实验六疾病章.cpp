//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
//typedef struct Animal
//{
//	string name;
//	string  question;
//	Animal* yes, * no;
//
//}animalrec;
//string s1[50];
//int read_file()
//{
//	fstream ifs;
//	//3，打开文件，并且判断是否打开成功
//	ifs.open("text.txt", ios::in | ios::out);
//	char line[80];
//	int i = 0;
//	while (ifs.getline(line, sizeof(line)))
//	{
//		s1[i] = line;
//		i++;
//	}
//	return i;
//}
//
//animalrec* createnode(int &count,int sum)
//{
//	animalrec* head;
//	if (s1[count] == s1[0]||s1[count]==s1[sum-1])
//	{
//		head = NULL;
//		count++;
//	}
//	else
//	{
//		head = new animalrec;
//		head->name = s1[count]; ++count;
//		head->question = s1[count]; ++count;
//		head->yes = createnode(count,sum);
//		head->no = createnode(count,sum);
//	}
//	return head;
//}
//void recursion(animalrec* head)
//{
//	if (!head)
//	{
//		return;
//	}
//	cout << "name=" << head->name << endl;
//	cout<< "question=" << head->question << endl;
//	recursion(head->yes);
//	recursion(head->no);
//}
//void addtext(char line1[80],char line2[80],int count)
//{
//
//	fstream ifs;
//	//3，打开文件，并且判断是否打开成功
//	ifs.open("text.txt", ios::in | ios::out);
//	int sum = read_file(), i = 0;
//	while (i < sum)
//	{
//		ifs << s1[i] << endl;
//		if (i != count)
//		{
//			i++;
//		}
//		else
//		{
//			ifs << line1 << endl;
//			ifs << line2 << endl;
//			ifs << "NUL" << endl;
//			i++;
//
//		}
//	}
//	ifs.close();
//}
//void addnode(animalrec*&head,int &count_2)
//{
//	cout << "请输入名字和对应的问题" << endl;
//	head = new animalrec;
//	head->yes = NULL;
//	head->no = NULL;
//	char line1[80]; cin >> line1;
//	head->name = line1;
//	char line2[80]; cin >> line2;
//	head->question = line2;
//	addtext(line1,line2,count_2);
//}
//bool judge_recursion = false;
//void putupquestion(animalrec*&head,int &count_2,animalrec *r,int sum)
//{
//
//	if (judge_recursion)
//	{
//		return;
//	}
//	if (!head)
//	{
//		addnode(head, count_2);
//		judge_recursion = true;
//	}
//	else
//	{
//		cout << head->question << endl;
//		cout << "[Y/N]" << endl;
//		char ch;
//		cin >> ch;
//		if (ch == 'Y')
//		{
//			cout << head->name << endl;
//			cin >> ch;
//			
//			if (!head->yes&&ch=='Y')
//			{
//				cout << "没错 你猜对了惹 你他娘的真是个人才" << endl;
//				judge_recursion = true;
//				return;
//			}
//			if(ch=='Y')putupquestion(head->yes, count_2,r,sum);
//			
//		}
//		if (ch == 'N')
//		{
//			if (!head->no)
//			{
//				
//				while (r->no != NULL)
//				{
//					r = r->no;
//				}
//				if (r->question == head->question)
//				{
//					count_2 = sum - 2;
//				}
//				else
//				{
//
//					while (head->question != s1[count_2])count_2++;
//					count_2++;
//				}
//			}
//			putupquestion(head->no, count_2,r,sum);
//		}
//		
//	
//	}
//}
//void revise()
//{
//	judge_recursion = false;
//}
//int main()
//{
//	int sum = read_file();
//	int count = 1;
//	/*while (count < sum)
//	{
//		cout << s1[count] << endl;
//		count++;
//	}*/
//	animalrec* p,*root,*r;
//	int judge = 1;int count_2 = 1;
//	cout << "开始轮回了！！！输入0输出棵树木给你看看 输入1让你猜猜这棵树" << endl;
//	while (cin >> judge)
//	{
//		sum = read_file(); count = 1;
//		root = createnode(count, sum);
//		p = root; r = root;
//		count_2 = 1;
//		switch (judge) {
//		case 0:
//			recursion(p);
//			break;
//		case 1:
//			putupquestion(p, count_2,r,sum); 
//			revise();			
//		}
//		cout << "开始轮回了！！！输入0输出棵树木给你看看 输入1让你猜猜这棵树" << endl;
//
//	}
//}