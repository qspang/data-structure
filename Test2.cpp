//#include<iostream>
//#include<ctime>
//using namespace std;
//void swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void print(int* a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << " ";
//	}
//	cout << endl;
//}
//void bubblesort(int* a, int n,int &sum_com,int &sum_move)
//{
//	int count = n;
//	while (count--)
//	{
//		for (int i = 1; i < n; i++)
//		{
//			if (a[i] < a[i - 1])
//			{
//				swap(a[i], a[i - 1]);
//				sum_move++;
//			}
//			sum_com+=3;
//		}
//		//cout << "bubblesort" << endl;
//		//print(a, n);
//	}
//}
//void selectionsort(int* a, int n, int& sum_com, int& sum_move)
//{
//	int begin = 0; int end = n - 1;
//	while (begin < end)
//	{
//		int min = begin, max = begin;
//		for (int i = begin; i <= end; i++)
//		{
//			if (a[i] > a[max])
//			{
//				max = i;
//			}
//			if (a[i] < a[min])
//			{
//				min = i;
//			}
//			sum_com += 2;
//
//		}
//		swap(a[min], a[begin]);
//		swap(a[max], a[end]);
//		sum_move += 6;
//		begin++; end--;
//		//cout << "selectionsort" << endl;
//		//print(a, n);
//	}
//}
//void insertsort(int* a, int n, int& sum_com, int& sum_move)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		int end = i;
//		int temp = a[end + 1];
//		while (end >= 0)
//		{
//			if (temp < a[end])
//			{
//				a[end + 1] = a[end];
//				end--;
//				sum_move++;
//			}
//			else
//			{
//				break;
//			}
//			sum_com++;
//		}
//		a[end + 1] = temp;
//		sum_move++;
//		//cout << "insertsort" << endl;
//		//print(a, n);
//	}
//}
//void shellsort(int* a, int n, int& sum_com, int& sum_move)
//{
//	int gap = n;
//	while (gap > 1)
//	{
//		gap = gap / 2;
//		for (int i = 0; i < n - gap; i++)
//		{
//			int end = i;
//			int temp = a[end + gap];
//			while (end >= 0)
//			{
//				if (temp < a[end])
//				{
//					a[end + gap] = a[end];
//					end = end - gap;
//					sum_move ++;
//				}
//				else
//				{
//					break;
//				}
//				sum_com++;
//			}
//			a[end + gap] = temp;
//			sum_move++;
//		}
//		//cout << "shellsort" << endl;
//		//print(a, n);
//	}
//}
//int main()
//{
//	int n = 101; srand((unsigned)time(NULL));
//	int a[12] = {};
//	for (int i = 0; i < n; i++)
//	{
//		a[i] = rand();
//	}
//	cout << "原来数组：";
//	print(a, n); int y = 0;
//	cout << "bubblesort:1 insertsort:2 selection:3 shellsort:4" << endl;
//	while (cin >> y)
//	{
//		int Sum_com = 0, Sum_move = 0;
//		switch (y)
//		{
//		case 1:
//			cout << "bubblesort" << endl;
//			bubblesort(a, n,Sum_com,Sum_move);
//			print(a, n);
//			cout << "比较次数：" << Sum_com << " 移动次数：" << Sum_move << endl;
//			break;
//		case 2:
//			cout << "insertsort" << endl;
//			insertsort(a, n, Sum_com, Sum_move);
//			print(a, n);
//			cout << "比较次数：" << Sum_com << " 移动次数：" << Sum_move << endl;
//			break;
//		case 3:
//			cout << "selectionsort" << endl;
//			selectionsort(a, n, Sum_com, Sum_move);
//			print(a, n);
//			cout << "比较次数：" << Sum_com << " 移动次数：" << Sum_move << endl;
//			break;
//		case 4:
//			cout << "shellsort" << endl;
//			shellsort(a, n, Sum_com, Sum_move);
//			print(a, n);
//			cout << "比较次数：" << Sum_com << " 移动次数：" << Sum_move << endl;
//			break;
//		
//		
//		}
//
//	}
//}