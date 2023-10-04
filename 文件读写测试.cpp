//#include<iostream>
//#include <fstream>
//#include<istream>
//#include <string>
//using namespace std;
//
//void test01()
//{
//	//1，包含头文件fstream
//
//	//2，创建流对象
//	ofstream ofs;
//	//3，指定打开方式
//	ofs.open("C:\\Users\\pqs-xsz-xia\\Desktop\\text.txt", ios::out);
//	//4，写内容
//	char line[80] = {0};
//	cin >> line;
//	ofs << line << endl;
//	cin >> line;
//	ofs << line << endl;
//	cin >> line;
//	ofs << line << endl;
//	cin >> line;
//	ofs << line << endl;
//	cin >> line;
//	ofs << line << endl;
//	
//	//5，关闭文件
//	ofs.close();
//}
//
//void test02()
//{
//	//1，包含头文件
//	//2，创建流对象
//	ifstream ifs;ofstream ofs;
//	//3，打开文件，并且判断是否打开成功
//	ifs.open("C:\\Users\\pqs-xsz-xia\\Desktop\\text.txt", ios::in);
//	
//	//3，指定打开方式
//	
//
//
//	//4，读数据
//	//第一种
//	/*char buf[2048] = { 0 };
//	while (ifs >> buf)
//	{
//		cout << buf << endl;
//	}*/
//	//第二种
//	/*char buf[1024] = { 0 };
//	while (ifs.getline(buf, sizeof(buf)))
//	{
//		cout << buf << #include<iostream>
////#include<fstream>
////#include<string>
////using namespace std;
////typedef struct Animal
////{
////	struct Animal* next;
////	string name;
////	string  question;
////	Animal* yes, * no;
////
////}animalrec;
////string s1[50];
////int read_file()
////{
////	fstream ifs;
////	//3，打开文件，并且判断是否打开成功
////	ifs.open("C:\\Users\\pqs-xsz-xia\\Desktop\\text.txt", ios::in | ios::out | ios::binary);
////	char line[80];
////	int i = 0;
////	while (ifs.getline(line, sizeof(line)))
////	{
////		s1[i] = line;
////		i++;
////	}
////	return i;
////}
////void addtext(char line1[80], char line2[80])
////{
////
////
////}
////animalrec* createnode(int &count)
////{
////	animalrec* head;
////	if (s1[count] == s1[6])
////	{
////		head = NULL;
////		count++;
////	}
////	else
////	{
////		head = new animalrec;
////		head->name = s1[count]; ++count;
////		head->question = s1[count]; ++count;
////		head->yes = createnode(count);
////		head->no = createnode(count);
////	}
////	return head;
////}
////void recursion(animalrec* head)
////{
////	if (!head)
////	{
////		return;
////	}
////	cout << "name=" << head->name << endl;
////	cout<< "question=" << head->question << endl;
////	recursion(head->yes);
////	recursion(head->no);
////}
////void addnode(animalrec*head)
////{
////	cout << "请输入名字和对应的问题" << endl;
////	head = new animalrec;
////	head->yes = NULL;
////	head->no = NULL;
////	char line1[80]; cin >> line1;
////	head->name = line1;
////	char line2[80]; cin >> line2;
////	head->question = line2;
////	addtext(line1,line2);
////}
////
////void putupquestion(animalrec*head)
////{
////	cout << "[Y/N] or E" << endl;
////	char ch;
////	while (cin >> ch)
////	{
////		if (ch == 'Y')
////		{
////			head = head->yes;
////			if (!head)
////			{
////
////				addnode(head);
////			}
////		}
////		if (ch == 'N')
////		{
////			head = head->no;
////			if (!head)
////			{
////
////				addnode(head);
////			}
////		}
////		if (ch == 'E')
////		{
////			break;
////		}
////		
////	}
////}
////int main()
////{
////	int sum = read_file();
////	int count = 0;
////	while (count < sum)
////	{
////		cout << s1[count] << endl;
////	}
////	//animalrec *root=createnode(count);
////	//recursion(root);
////	
////}endl;
//	}*/
//	//第三种
//	string buf; string s[100]; int i = 0;
//	while (getline(ifs,buf))
//	{
//		cout << buf << endl;
//		s[i] = buf; i++;
//	}
//	while (i--)
//	{
//		cout << s[i] << endl;;
//	}
//	//第四种
//	/*char c;
//	while ((c = ifs.get()) != EOF)
//	{
//		cout << c;
//	}*/
//
//
//	//5，关闭文件
//	ifs.close();
//
//}
//void test03()
//{
//	fstream ifs; 
//	//3，打开文件，并且判断是否打开成功
//	ifs.open("C:\\Users\\pqs-xsz-xia\\Desktop\\text.txt", ios::in|ios::out|ios::binary);
//	char line[80];
//	string s1[40]; int i = 0;
//	while (ifs.getline(line, sizeof(line)))
//	{
//		s1[i] = line;
//		i++;	
//	}
//	while (i--)
//	{
//		cout << s1[i] << endl;
//	}
//	
//
//}
//int main()
//{
//	
//	test03();
//	system("pause");
//	return 0;
//}
