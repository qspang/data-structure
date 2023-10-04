//#include<iostream>
//#include<algorithm>
//using namespace std;
//void adjustdown(int* a, int n,int root)
//{
//	int parent = root;
//	int child = 2 * parent + 1;
//	
//	while (child < n)
//	{
//		if (child+1<n&&a[child] < a[child + 1])child++;
//		if (a[child] > a[parent]) { swap(a[child], a[parent]); parent = child; child = 2 * parent + 1; }
//		else { break; }
//	}
//}
//void print(int* a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << " ";
//	}
//	cout << endl;
//}
//void heapsort(int *a,int n)
//{
//	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
//	{
//		adjustdown(a, n, i);
//	}
//	int end = n - 1;
//	while (end)
//	{
//		swap(a[0], a[end]);
//		adjustdown(a, end, 0);
//		end--;
//		print(a, n);
//	}
//}
//void binarysort(int n,int *a)
//{
//	for (int i = 0; i < n; i++)
//	{
//		int mid=0, low = 0, high = i - 1;
//		int temp = a[i];
//		while (low <= high)
//		{
//			mid = (high + low) / 2;
//			if (a[mid] < temp)
//			{
//				low = mid + 1;
//			}
//			else
//			{
//				high = mid - 1;
//			}
//		}
//		for (int j = i - 1; j >= low; j--)
//		{
//			a[j + 1] = a[j];
//		}
//		if (i != low)
//		{
//			a[low] = temp;
//		}
//		print(a, n);
//	}
//}
//int main()
//{
//	int a[10] = { 14, 17, 53, 35, 9, 32, 68, 41, 76, 23 }; int n = 10;
//	cout << "原始数组" << endl;
//	print(a, n);
//	cout << "heapsort" << endl;
//	heapsort(a, n); 
//	int b[10] = { 14, 17, 53, 35, 9, 32, 68, 41, 76, 23 };
//	cout << "原始数组" << endl;
//	print(b, n);
//	cout << "binarysort" << endl;
//	binarysort(n,b);
//
//}