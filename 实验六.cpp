//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
//typedef struct Animal
//{
//	
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
//	ifs.open("C:\\Users\\pqs-xsz-xia\\Desktop\\text.txt", ios::in | ios::out | ios::binary);
//	char line[80];
//	int i = 0;
//	while (ifs.getline(line, sizeof(line)))
//	{
//		s1[i] = line;
//		i++;
//	}
//	return i;
//}
//animalrec* createnode(int &count,int sum)
//{
//	animalrec* head;
//	if (s1[count] == s1[6])
//	{
//		head = NULL;
//		//cout << "count===" << count;
//		++count;
//	}
//	else
//	{
//		head = new animalrec;
//		//cout <<"count=" << count;
//		head->name = s1[count]; 
//		++count;
//		head->question = s1[count]; 
//		++count;
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
//	cout << "----------" << endl;
//	cout << head->name << endl;
//	cout << head->question << endl;
//	recursion(head->yes);
//	recursion(head->no);
//}
//void addtext(char line1[80], char line2[80])
//{
//
//
//}
//void addnode(animalrec* head)
//{
//	cout << "请输入名字和对应的问题" << endl;
//	head = new animalrec;
//	head->yes = NULL;
//	head->no = NULL;
//	char line1[80]; cin >> line1;
//	head->name = line1;
//	char line2[80]; cin >> line2;
//	head->question = line2;
//	addtext(line1, line2);
//}
//
//void putupquestion(animalrec* head)
//{
//	cout << "[Y/N] or E" << endl;
//	char ch;
//	while (cin >> ch)
//	{
//		if (ch == 'Y')
//		{
//			head = head->yes;
//			if (!head)
//			{
//
//				addnode(head);
//			}
//		}
//		if (ch == 'N')
//		{
//			head = head->no;
//			if (!head)
//			{
//
//				addnode(head);
//			}
//		}
//		if (ch == 'E')
//		{
//			break;
//		}
//
//	}
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
//	
//	animalrec* root= createnode(count,sum);
//	recursion(root);
//
//}