#include<iostream>
#include<ctime>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	char ch[1001];
	for (int i = 0; i < 10; ++i)
	{
		cin >> ch[i];
	}
	int len = strlen(ch);
	sort(ch, ch + len);
	cout << ch;
		
	system("pause");
	return 0;
}

