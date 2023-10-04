//#include<iostream>
//using namespace std;
//class link
//{
//public:
//	link(int element, link* nextval=NULL)
//	{
//		val = element;
//		next = nextval;
//	}
//	link(link* nextval = NULL)
//	{
//		next = nextval;
//	}
//
//	int val;
//	link* next;
//};
//class lqueue
//{
//public:
//	link* front;
//	link* back;
//	int size;
//
//	lqueue(int sz = 0)
//	{
//		front = back = new link;
//		front->val = 0;
//	}
//	void clear()
//	{
//		back = front->next;
//		while (front != NULL)
//		{
//			delete front;
//			front = back;
//			back = back->next;
//		}
//	}
//
//};
//void enqueue(lqueue*&r,int value)
//{
//
//	r->back->next = new link(value, NULL);
//	r->back = r->back->next;
//	r->size++;
//}
//void dequeue(lqueue*&head)
//{
//	
//	cout << head->front->val << endl;
//	link* temp=new link;
//	temp = head->front;
//	head->front = head->front->next;
//	delete temp;
//	
//}
//int judge_length(lqueue* head)
//{
//	return head->size;
//}
//bool judge_vacancy(lqueue* head)
//{
//	if (head->size == 0)
//	{
//		return false;
//	}
//	return true;
//}
//void print_queue(lqueue*r)
//{
//	
//	while (r->front != NULL)
//	{
//		cout << r->front->val << endl;
//		r->front = r->front->next;
//	}
//}
//int main()
//{
//	int num = -1, value;lqueue *q=new lqueue;
//	lqueue* r = new lqueue; q->front = r->front;
//	while (num != 0)
//	{
//		cout << "输入数字来决定操作" << endl;
//		cin >> num; int record;
//		switch(num)
//		{
//		
//		case 1:
//			cout << "入队列并请输入要输入的个数" << endl;
//			cin >> value;
//			record = value;
//			for (int i = 0; i < record; i++)
//			{
//				cin >> value;
//				enqueue(r, value);
//			}
//			break;
//		case 2:
//			cout << "出队列" << endl;
//			dequeue(r);
//			q->front = r->front;
//			break;
//		case 3:
//			cout << "queue length=" << judge_length(q) << endl;
//			break;
//		case 4:
//			if (judge_vacancy)
//			{
//				cout << "不为空" << endl;
//			}
//			else
//			{
//				cout << "空" << endl;
//			}
//			break;
//		case 5:
//			cout << " 清空队列 " << endl;
//			q->clear();
//			break;
//		case 6:
//			cout << "打印队列" << endl;
//
//			lqueue * pos = q;
//			if (pos->front == NULL)
//			{
//				cout << "队列已经被清除" << endl;
//				break;
//			}
//			print_queue(pos);
//			break;
//		}
//
//	}
//}
//#include<iostream>
//#include<stack>
//using namespace std;
//int main()
//{
//	stack<int>s;
//	stack<int>k;
//	int num, value;
//	cout << "输入你想要输入数字的个数" << endl;
//	cin >> num;
//	for (int i = 0; i < num; i++)
//	{
//		cin >> value;
//		s.push(value);
//	}
//	for (int i = 0; i < num; i++)
//	{
//		k.push(s.top());
//		s.pop();
//	}
//	for (int i = 0; i < num; i++)
//	{
//		cout << k.top() << endl;
//		k.pop();
//	}
//
////}
//#include<iostream>
//using namespace std;
//string insert(string s1, string s2, int index)
//{
//	string temp;
//	for (int i = 0; i < s1.size();i++)
//	{
//		if (i == index)
//		{
//			temp += s2;
//		}
//		temp += s1[i];
//	}
//	return temp;
//}
//string delete_1(string s1, int index, int j)
//{
//	string temp;
//	for (int i = 0; i < s1.size(); i++)
//	{
//		if (i<index || i>j)
//		{
//			temp += s1[i];
//		}
//	}
//	return temp;
//}
//int main()
//{
//	string s1, s2;; int num, n1,n2;
//	cout << "请输入是s1" << endl;
//	while (cin >> s1)
//	{
//		cout << "输入数字来觉得操作" << endl;
//		cin >> num;
//		if (num == 1)
//		{
//			cout << "你选择的是插入操作" << endl;
//			cout << "输入插入的起始位置和插入的新字符串" << endl;
//			cin >> n1 >> s2;
//			cout << "插入的字符串=" << insert(s1, s2, n1) << endl;;
//		}
//		if (num == 2)
//		{
//			cout << "你选择的是删除操作" << endl;
//			cout << "请输入起始位置和终位置" << endl;
//			cin >> n1 >> n2;
//			cout << "删除后的字符串是" << delete_1(s1, n1, n2) << endl;;
//		}
//
//
//		cout << "请输入是s1" << endl;
//
//	}
//	
//}