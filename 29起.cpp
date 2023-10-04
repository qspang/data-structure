//#include<iostream>
//using namespace std;
////栈的运用 就近匹配
//#include<stack>
////扫描字符串 如果碰到左括号 直接入栈
////如果碰到右括号 从栈顶弹出括号 判断是否左括号 如果匹配成果
//int isleft(char c)
//{
//	return c = '(';
//}
//int isright(char c)
//{
//	return c = ')';
//}
//int main()
//{
//	
//	string str = "1+2+6(dsf)dfsflp((sdfs)";
//	string p = str;
//	int index=0;
//	stack<char>s;
//	for (int i = 0; i < p.size(); i++)
//	{
//		if (isleft(p[i]))
//		{
//			s.push(p[i]);
//		}
//		if (isright(p[i]))
//		{
//			if (s.size() > 0)
//			{
//				s.top();
//				if (isleft(s.top()))
//				{
//					s.pop();
//				}
//			}
//			else
//			{
//				cout << "右括号没有匹配左括号" << endl;
//				for (int j = index; j < p.size(); j++)
//				{
//					cout << p[j];
//				}
//				cout << endl;
//			}
//		}
//		index++;
//	}
//	while (s.size() > 0)
//	{
//		cout << "有没匹配的左括号" << endl;
//
//	}
//
//}