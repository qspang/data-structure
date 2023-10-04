//#include<iostream>
//#include<algorithm>
//#include<map>
//using namespace std;
//typedef struct List {
//	List* next = NULL;
//	int NODE;
//	int side;
//}list;
//typedef struct Node {
//	bool flag = true;
//	int count;
//	list* next = NULL;
//}node;
//node a[8];
//int arr[10][10] = { 0 };
//int store[10][10] = { 0 };
//int dot[20] = {0};
//void creategraph(int n)
//{
//	for (int i = 1; i < n + 1; i++)
//	{
//		for (int k = 1; k < n + 1; k++)
//		{
//			arr[i][k] = 1000; 
//		}
//	}
//	node* p; int count; list* q;
//	for (int i = 1; i < n+1; i++)
//	{
//		p = new node; a[i] = *p; cin >> count; a[i].count = count; q = new list; a[i].next = q;
//		while (count--)
//		{
//			int record_1,record_2; cin >> record_1;q->NODE = record_1;
//			cin >> record_2; q->side = record_2;
//			arr[i][record_1] = record_2;//i行 record_1列
//			q->next = new list;
//			q = q->next;
//		}
//	}
//	/*for (int i = 1; i < n + 1; i++)
//	{
//		for (int k = 1; k < n + 1; k++)
//		{
//			cout << arr[i][k] << " ";
//		}
//		cout << endl;
//	}*/
//}
//bool judge_graph(int n)
//{
//	
//	for (int i = 1; i < n+1; i++)
//	{
//		if (a[i].flag)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//bool in_yn(int n,int num)
//{
//	for (int i = 1; i < n + 1; i++)
//	{
//		if (dot[i]==num)
//		{
//			return true;
//		}
//	}
//	return false;
//}
//void createtree(int n)
//{
//	int num = 1, res, n1, n2;
//	res = arr[1][1];
//	for (int i = 1; i < n + 1; i++)
//	{
//		for (int k = 1; k < n + 1; k++)
//		{
//			if (res > arr[i][k])
//			{
//				res = arr[i][k];
//				n1 = i, n2 = k;
//			}
//		}
//	}
//	store[n1][n2] = arr[n1][n2]; arr[n1][n2] = 1000; arr[n2][n1] = 1000;
//	dot[num++] = n1; dot[num++] = n2; a[n1].flag = false; a[n2].flag = false;
//	while (!judge_graph(n))
//	{
//		res = arr[1][1];
//		for (int i = 1; i < n + 1; i++)
//		{
//			for (int k = 1; k < n + 1; k++)
//			{
//				if (res > arr[i][k]&& (in_yn(n, i) || in_yn(n, k))&&(a[i].flag||a[k].flag))
//				{	
//					res = arr[i][k];
//					n1 = i, n2 = k;
//				}
//			}
//		}
//		store[n1][n2] = arr[n1][n2]; arr[n1][n2] = 1000; arr[n2][n1] = 1000; a[n1].flag = false; a[n2].flag = false;
//		if (!in_yn(n, n1))
//		{
//			dot[num++] = n1;
//		}
//		if (!in_yn(n, n2))
//		{
//			dot[num++] = n2;
//		}
//	}
//	int sum = 0;
//	cout << "下面为边的矩阵" << endl;
//	for (int i = 1; i < n + 1; i++)
//	{
//		for (int k = 1; k < n + 1; k++)
//		{
//			sum += store[i][k];
//			cout << store[i][k] << " ";
//		}
//		cout << endl;
//	}
//	cout << "总权值为" << sum << endl;
//}
//int main()
//{
//	int n; cin >> n;
//	creategraph(n); 
//	createtree(n);
//	system("pause");
//	return 0;
//}