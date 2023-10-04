//#include<iostream>
//#include<map>
//#include<algorithm>
//using namespace std;
//typedef struct List {
//	int num;
//	List* next = NULL;
//}list;
//void createnode(list *head,int count)
//{
//	list* p; p = head; int n;
//	while (count--)
//	{
//		cin >> n; p->num = n; p->next = new list; p = p->next;
//	}
//}
//void print(list* head)
//{
//	list* p; p = head;
//	while (p->next)
//	{
//		cout << p->num << " ";p = p->next;
//	}
//	cout << endl;
//}
//void question1(list* head)
//{
//	map<int, int> m; list* p = head;
//	while(p->next)
//	{
//		m[p->num] += 1;p = p->next;
//	}
//	p = head; list* q; q = head->next;
//	if (q != NULL&&q->num==p->num)
//	{
//		m[p->num]--;p->next = q->next; q = q->next;
//	}
//	while (q->next)
//	{
//		bool flag = false;
//		if (m[q->num] != 1)
//		{
//			m[q->num]--;p->next = q->next;flag = true;
//		}
//		if (!flag)p = p->next;
//		q = q->next;
//	}
//}
//void question2(list *head)
//{
//	cout << "请输入上下限" << endl;
//	int a, b; cin >> a >> b;
//	if (a > b)swap(a, b);
//	list* q, * p; p = head; q = head->next;
//	if (q != NULL&&q->num<=b&&a<=q->num )
//	{
//		p->next = q->next; q = q->next;
//	}
//	while (q->next)
//	{
//		bool flag = false;
//		if (q->num <= b && a <= q->num)
//		{
//			p->next = q->next; flag = true;
//		}
//		if (!flag)p = p->next;
//		q = q->next;
//	}
//}
//int main()
//{
//	cout << "please cin the sum of number" << endl;
//	int n; cin >> n; 
//	list* head = new list;
//	createnode(head, n);
//	print(head);
//	question1(head);
//	print(head);
//	question2(head);
//	print(head);
//	system("pause");
//	return 0;
//}