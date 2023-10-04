//#include<iostream>
//#include <queue>
//using namespace std;
//typedef struct Target {
//	int data;
//	struct Target* next = NULL;
//}target;
//typedef struct Node {
//	int data;
//	bool flag = true;
//	target* next = NULL;
//	struct Node* Next = NULL;
//}node;
//int b;
//void addnode(node*& head)
//{
//	int   c, d, e; node* p; target* q, * r;
//	head = p;
//	cout << "请输入点的个数" << endl;
//	cin >> b; int bb = b;
//	while (bb--)
//	{
//		p = new node;
//		cout << "请按输入结点数字、所连的数目" << endl;
//		cin >> c >> d; d--; cin >> e;
//		p->data = c;
//		q = new target;
//		q->data = e;
//		p->next = q;
//		while (d--)
//		{
//			cin >> e;
//			r = new target;
//			r->data = e;
//			q->next = r;
//			q = r;
//		}
//		p = p->Next;
//	}
//}
//void print_out(node* head)
//{
//	int bb = b;
//	while (bb--)
//	{
//		cout << head->data << endl;
//		target* q;
//		q = head->next;
//		while (q)
//		{
//			cout << q->data << endl;
//			q = q->next;
//		}
//		head = head->Next;
//	}
//}
//void dfs(queue<node>q)
//{
//	target* qq;
//	for (int i = 0; i < b; i++)
//	{
//
//
//
//
//	}
//}
//int main()
//{
//	node* head;
//	addnode(head);
//	print_out(head);
//	queue<node>q; int i = 0;
//	dfs(q);
//}