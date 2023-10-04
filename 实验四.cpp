//#include<iostream>
//#include<algorithm>
//using namespace std;
//typedef struct target {
//	int startday;
//	int endday;
//	int dur;
//	string s[10];
//	string workname;
//	struct target* next = NULL;
//};
//typedef struct Node {
//	int startday=0;
//	int endday[10];
//	int dur[10];
//	string s[10];
//	string workname;
//	int count = 0;
//	target* next = NULL;
//	bool flag = true;
//}node;
//node a1[100];
//node aa[100];
//int tpord[100];
//int tpordtemp[100] = {0};
//int judge[11] = { 0 };
//void print(int a)
//{
//	target* q;
//	for (int i = 1; i <= a; i++)
//	{
//		
//		q = a1[i].next;
//		while (q)
//		{
//			//cout << q->startday<<" "<< q->dur<< endl;
//			q = q->next; 
//
//		}
//	}
//}
//void torpd(int cinnum,int dianmax)
//{
//	int count_2 = 1;
//	for (int k = 1; k <= dianmax; k++)
//	{
//		for (int i = 1; i <= dianmax; i++)
//		{
//			for (int j = 0; j < a1[i].count; j++)
//			{
//				tpordtemp[a1[i].endday[j]] = 1;
//			}
//
//		}
//		for (int i = 1; i <= dianmax; i++)
//		{
//			if (!tpordtemp[i]&&a1[i].flag)
//			{
//				a1[i].flag = false;
//				tpord[count_2] = i; count_2++;
//				for (int j = 0; j < a1[i].count; j++)
//				{
//					a1[i].endday[j] = 0;
//				}
//			}
//			tpordtemp[i] = 0;
//		}
//	}
//	cout << "拓扑排序后的结点展示" << endl;
//	for (int i = 1; i < count_2; i++)
//	{
//		cout << tpord[i] << " ";
//	}
//}
//void createnode()
//{
//	int dianmax;
//	int cinnum, startday, endday, dur; node* p; target* q;
//	string workname;	cin >> cinnum>>dianmax;
//	for (int i = 1; i <= dianmax; i++)
//	{
//		p = new node;
//		a1[i] = *p;
//	}
//	for (int i = 1; i <= cinnum; i++)
//	{
//		cin >> workname >> startday >> endday >> dur;
//		a1[startday].s[a1[startday].count] = workname;
//		a1[startday].endday[a1[startday].count] = endday;
//		a1[startday].dur[a1[startday].count] = dur;
//		a1[startday].count++;
//	}
//	target* r;
//	for (int i = 1; i <= dianmax; i++)
//	{
//		if (!a1[i].count)continue;
//		q = new target;
//		
//		a1[i].next=q; 
//		for (int j = 0; j < a1[i].count; j++)
//		{
//			q->dur = a1[i].dur[j];
//			q->startday=a1[i].endday[j];
//			if (j == a1[i].count - 1)break;
//			r = new target;
//			q->next = r;
//			q = r;
//			
//		}
//	}
//	print(cinnum);
//	torpd(cinnum,dianmax);
//}
//void searchlt(int dianmax, int* a)
//{
//	
//	int storedist[11]; 
//	for (int i = 0; i < 11; i++)
//	{
//		storedist[i] = 100;
//			
//	}
//	storedist[9] = a[dianmax];
//	for (int i = dianmax; i >= 1; i--)
//	{
//		target* q;
//		q = a1[i].next;
//		if (a1[i].count==0) 
//		{ 
//			storedist[i] = a[i];
//			continue; 
//			
//		}
//		while (q!=NULL)
//		{
//
//			storedist[i] = min(storedist[i], storedist[q->startday] - q->dur);
//			q = q->next;
//			
//
//		}
//	}
//	cout << "最晚事件时间" << endl;
//	for (int i = 1; i <= dianmax; i++)
//	{
//		cout << storedist[i] << " ";
//	}
//	cout << endl;
//	cout << "关键路径" << endl;
//	for (int i = 1; i <= dianmax; i++)
//	{
//		if (a[i] == storedist[i])
//		{
//			cout << i << " ";
//		}
//	}
//}
//int *searchet(int dianmax)
//{
//	int storedist[11] = { 0 }; 
//	for (int i = 1; i <= dianmax; i++)
//	{
//		target* q;
//		q = a1[i].next;
//		while (q)
//		{
//			storedist[q->startday] = max(storedist[q->startday], storedist[i] + q->dur);
//			q = q->next;
//		}
//	}
//	sort(storedist, storedist + dianmax);
//	return storedist;
//}
//int main()
//{
//	createnode();
//	cout << endl;
//	int *a=searchet(9);
//	cout << "最早事件时间" << endl;
//	for (int i = 1; i <= 9; i++)
//	{
//		cout << a[i] << " ";
//	}
//	cout << endl;
//	searchlt(9, a);
//	system("pause");
//	return 0;
//}
