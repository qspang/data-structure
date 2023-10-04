//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int max_time = 100;
//const int char_length = 20;
//const int max_ticket = 200;
//struct object {
//	string name;//name[0]不使用 逻辑上的习惯 name[char_length+1]为结束符
//	int data=0;
//	int age;
//	string ID;
//	string flight;
//	object* right_link=NULL ;
//	object* left_link=NULL ;
//
//};
//
//object* node[max_time + 2];//node[0]不使用
//int cin_max_arr;
//int ticket_num;//订票数
//string name_record[char_length+2];
//void find_index(int& at, string arr)
//{
//	at = 1;
//	while (node[at]->name != arr)
//	{
//		at++;
//		if (at == cin_max_arr + 1)
//		{
//			break;
//
//		}
//	}
//}
//void find_index_while(int &x,int y)
//{
//	while (node[x]->name != name_record[y])
//	{
//		x++;
//	}
//}
//void insert(int at,string arr)//at对应i p是node[i]->right_link  方便插入insert
//{
//	
//	if (at <= cin_max_arr && (ticket_num + node[at]->data < 10))
//	{
//		node[at]->data += ticket_num;
//		return;
//	}
//	if (at > cin_max_arr)
//	{
//		node[at]->name = arr;
//		if (ticket_num > 10)
//		{
//			cout << "最多可以订10张票" << endl;
//			node[at]->data = 10;
//			
//		}
//		else
//		{
//			node[at]->data = ticket_num;
//		}
//		int hh, tt;
//		if (arr > name_record[cin_max_arr])
//		{
//			find_index(hh, name_record[cin_max_arr]);
//			node[hh]->right_link = node[at];
//			node[at]->left_link = node[hh];
//			name_record[at] = arr;
//			cin_max_arr++;
//			return;
//		}//尾结点特殊考虑
//		hh=1;
//		for ( hh = 1; hh <= cin_max_arr; hh++)
//		{
//			if (name_record[hh] >arr)
//			{
//				tt = hh;
//				for (hh=cin_max_arr+1; hh>tt; hh--)
//				{
//					name_record[hh] = name_record[hh-1];
//				}
//				break;
//			}
//		}//录入表中
//		name_record[tt] = arr;
//		 int record_1 = 1;
//		 find_index_while(record_1, tt - 1);
//		node[at]->right_link = node[record_1]->right_link;
//		node[record_1]->right_link->left_link = node[at];
//		node[record_1]->right_link = node[at];
//		node[at]->left_link = node[record_1];
//		//中间结点插入其中
//	}
//	cin_max_arr++;
//	
//	
//}
//void Delete(int at)
//{
//	
//	if (at > cin_max_arr)
//	{
//		cout << "查无此人" << endl;
//	}
//	else
//	{
//		if (ticket_num < node[at]->data)
//		{
//			cout << "退票小于订票" << endl;
//			node[at]->data = node[at]->data - ticket_num;
//		}
//		else
//		{
//			if (cin_max_arr == 1)
//			{
//				node[at]->data = 0;
//				
//			}
//			else if(cin_max_arr>=3)
//			{
//				cout << "退票大于原订票 删除结点" << endl;
//				if (node[at]->name == name_record[cin_max_arr])//尾结点特殊处理
//				{
//					object* p;
//					p = node[at];
//					delete p;
//					name_record[cin_max_arr] = "------------kong---------------";
//					find_index(at, name_record[cin_max_arr - 1]);
//					node[at]->right_link = NULL;
//					cin_max_arr--;
//					return;
//				}
//				int record_2 = 1; int record_1 = 1;
//				
//				while (node[at]->name != name_record[record_2])
//				{
//					record_2++;
//				}
//				find_index_while(record_1, record_2 - 1);
//				
//				node[record_1]->right_link = node[record_1]->right_link->right_link;
//				node[record_1]->right_link->left_link = node[record_1];
//				object* k;
//				k = node[at];
//				delete k;
//			}
//			
//		}
//	}
//}
//void print_list(object* p)
//{
//	int i=1;
//	while (p != NULL)
//	{
//		find_index(i, p->name);
//		cout << "index=" << i << " ";
//		cout << "name=" << p->name << " "<<"data=" << p->data <<" "<<"ID="<<p->ID<<" "<<"age=" <<p->age <<
//			" "<<"flight="<<p->flight<<endl;
//		p = p->right_link;
//		
//	}
//	cout << "end" << endl;
//}
//void clear(int at, object* p)
//{
//	node[at]->data = 0;
//	while (p != NULL)
//	{
//		delete p;
//		p = p->right_link;
//
//	}
//	node[at]->right_link = NULL;
//}
//void list_init()
//{
//	object* p; string cin_name, id, FL; int Age;
//	for (int j = 1; j < max_time; j++)
//	{
//		p = new object;
//		node[j] = p;
//	}
//	for (int i = 1; i <= cin_max_arr; i++)
//	{
//		cout << "cin people concerning information" << endl;
//		cin >> ticket_num >> cin_name >> id >> Age >> FL;
//		name_record[i] = cin_name;
//		node[i]->ID = id;
//		node[i]->age = Age;
//		node[i]->flight = FL;
//		node[i]->data = ticket_num;
//
//	}
//}
//void test1()
//{
//	int i, t1=-1;
//	object* p;
//	string arr;
//	cout << "cin cin_max_arr" << endl;
//	cin >> cin_max_arr;
//	list_init();
//	sort(name_record + 1, name_record + cin_max_arr+1, less<string>());
//	for (int k = 1; k<cin_max_arr; k++)
//	{
//		int r1 = 1, r2 = 1;
//		find_index_while(r1, k);
//		find_index_while(r2, k+1);
//		node[r1]->right_link = node[r2];
//		node[r2]->left_link = node[r1];
//	}
//	
//	while (t1 != 4)
//	{
//		
//		
//		cout << "please cin t1" << endl;
//		cin >> t1;
//		switch (t1)
//		{
//		case 0:
//			for (i = 1; i = cin_max_arr; i++)
//			{
//				p = node[i];
//				clear(i, p);
//				break;
//			}
//		case 1:cout << "you choose to book tickets(to t1=1)"  << endl;
//			cout << "cin ticket_num and arr" << endl;
//			cin >> ticket_num >> arr;
//			find_index(i, arr);
//			insert(i,arr);
//			break;
//
//		case 2:cout << "you choose to refund tickets(to t1=2)"  << endl;
//			cout << "cin ticket_num and arr" << endl;
//			cin >> ticket_num >> arr;
//			find_index(i, arr);
//			cout << "i=" << i << endl;
//			Delete(i);
//			break;
//		case 3:
//			find_index(i, name_record[1]);
//			p = node[i];
//			print_list(p);
//			break;
//		
//			
//		}
//		
//	}
//}
//int main()
//{
//	test1();
//}