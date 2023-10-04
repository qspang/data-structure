//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
////stirng 本质是一个类 char*是一个指针 string 是一个类 类内部封装char* 管理这个字符串 是一个char*型的容器
//
////string 的构造函数
////string()                      创建一个空的字符串 string str
////string (const char*s)         使用字符串s初始化
////string (const string &str)    使用一个strinng 对象初始化零一个string 对象
////string (int n,char c)          使用n分字符初始化
//
//void test01()
//{
//	string s1;
//
//	const char* str = "hello world";
//	string s2(str);
//
//	cout << "s2=" << s2 << endl;
//
//	string s3(s2);
//
//	cout << "s3=" << s3 << endl;
//
//	string s4(10, 'a');
//
//	cout << "s4=" << s4 << endl;
//
//
// }
//
////string赋值操作 = 和 assign
//void test02()
//{
//	string str1;
//	str1 = "hello world";
//	cout << "str1=" << str1 << endl;
//
//	string str2;
//	str2 = str1;
//
//	string str3;
//	str3 = 'a';
//	cout << "s3=" << str3 << endl;
//
//	string str4;
//	str4.assign("hello c++");
//	cout << "str4=" << str4 << endl;
//
//	string str5;
//	str5.assign("hello c++", 5);
//	cout << "str5=" << str5 << endl;
//
//	string str6;
//	str6.assign(str5);
//	cout << "str6=" << str6 << endl;
//
//	string str7;
//	str7.assign(10, 'w');
//	cout << "str7=" << str7 << endl;
//
//
//}
////字符串拼接
//void test03()
//{
//	string str1 = "我";
//	str1 += "爱玩游戏";
//
//	cout << "str1=" << str1 << endl;
//
//	str1 += ':';
//	cout << "str1 =" << str1 << endl;
//	
//	string str2 = "LOL DNF";
//
//	str1 += str2;
//	cout << "str1=" << str1 << endl;
//
//	string str3 = "I";
//	str3.append("love");
//	cout << "str3=" << str3 << endl;
//
//	str3.append("game abced", 4);
//	cout << "str3=" << str3 << endl;
//
//	str3.append(str2);
//	cout << "str3=" << str3<< endl;
//
//	str3.append(str2, 0, 3);
//	cout << "str3=" << str3 << endl;
//
//
//}
////查找 
////替换
//void test04()
//{
//	string str1 = "abcdefg";
//	int pos=str1.find("de");
//	cout <<"pos="<< pos << endl;
//	if (pos == -1)
//	{
//		cout << "没找到字符串" << endl;
//	}
//	else
//	{
//		cout << "找到字符串 pos=" << pos << endl;
//	}
//
//	//rfind和find区别
////rfind从右往左查找 find从左往右查找
//	pos = str1.rfind("de");
//
//	cout << "找到字符串 pos=" << pos << endl;
//
//	
//
//}
////替换
//void test05()
//{
//	string str1 = "abcdefg";
//	//把bcd换成1111
//	str1.replace(1, 3, "1111");
//	cout << "str1=" << str1 << endl;
//}
////比较
//void test06()
//{
//	//= 0
//	//> 1
//	//< -1
//	string str1 = "xello";
//	string str2 = "hello";
//	if (str1.compare(str2) == 0)
//	{
//		cout << "str1等于str2" << endl;
//	}
//	else if (str1.compare(str2) > 0)
//	{
//		cout << "str1大于str2" << endl;
//	}
//	else
//	{
//		cout << "str1小于str2" << endl;
//
//	}
//}
////字符串存取
//void test07()
//{
//	string str1 = "hello";
//	cout << "str=" << str1 << endl;
//	//1、通过【】访问单个字符
//	for (int i = 0; i < str1.size(); i++)
//	{
//		cout << str1[i] << " ";
//	}
//	cout << endl;
//	//2、通过at的方式访问单个字符
//	for (int i = 0; i < str1.size(); i++)
//	{
//		cout << str1.at(i) << " ";
//	}
//	cout << endl;
//	//修改单个字符
//	str1[0] = 'x';
//
//	str1.at(0) = 'x';
//
//}
////插入  insert 和删除 erase
//void test08()
//{
//	string str1 = "hello";
//	//插入
//	str1.insert(1, "111");
//	cout << "str1=" << str1 << endl;
//
//	//删除
//	str1.erase(1, 3);
//	cout << "str1=" << str1 << endl;
//}
////字串获取 substr 截取一小段想要的字符串
//void test09()
//{
//	string str = "abcde";
//	string substR = str.substr(1, 3);
//	cout << "substR=" << substR << endl;
//}
//void test10()
//{
//	string email = "hello@sina.com";
//	//从邮件的地址获取用户名的信息
//	int pos = email.find("@");
//	string userName = email.substr(0, pos);
//	cout << userName << endl;
//}
//int main()
//{
//	test10();
//}