//#include<iostream>
//using namespace std;
//
//class link {
//public:
//	int data;
//	link* next=NULL;
//};
//int main()
//{
//	int first_sum, second_sum,len_1,len_2;
//	cout << "please cin first_sum and second_sum" <<endl;
//	while (cin >> first_sum >> second_sum)
//	{
//		len_1 = first_sum;
//		len_2 = second_sum;
//		cout << "please cin value belonging to the first linear list" << endl;
//		int data;
//		link* head_1 = new link();
//		link* p = head_1;
//		while (first_sum > 0)
//		{
//			cin >> data;
//			p->data = data;
//			p->next = new link();
//			p = p->next;
//			first_sum--;
//
//		}
//		link* temp_1 = head_1;
//		/*while (temp->next != NULL)
//		{
//			cout << temp->data << " ";
//			temp = temp->next;
//		}*/
//		link* head_2 = new link();
//		link* q = head_2;
//		cout << "please cin value belonging to the second linear list" << endl;
//		while (second_sum > 0)
//		{
//			cin >> data;
//			q->data = data;
//			q->next = new link();
//			q = q->next;
//			second_sum--;
//		}
//
//		link* temp_2 = head_2;
//		/*while (temp->next != NULL)
//		{
//			cout << temp->data << " ";
//			temp = temp->next;
//		}*/
//		link* r = new link();
//		if (len_1 > len_2)
//		{
//			while (temp_2->next)
//			{
//				r = temp_2->next;
//				temp_2->next = temp_1->next;
//				temp_1->next = temp_2;
//				temp_2 = r;
//				temp_1 = temp_1->next->next;
//			}
//			r = head_1;
//			cout << "combined linear list" << endl;
//			while (r->next)
//			{
//				cout << r->data << " ";
//				r = r->next;
//			}
//			cout << endl;
//		}
//		else
//		{
//			while (temp_1->next)
//			{
//				r = temp_1->next;
//				temp_1->next = temp_2->next;
//				temp_2->next = temp_1;
//				temp_1 = r;
//				temp_2 = temp_2->next->next;
//			}
//			r = head_2;
//			cout << "combined linear list" << endl;
//			while (r->next)
//			{
//				cout << r->data << " ";
//				r = r->next;
//			}
//			cout << endl;
//		}
//		cout << "please cin first_sum and second_sum" << endl;
//
//	}
//	
//
//	
//
//
//
//}