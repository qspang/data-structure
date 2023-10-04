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
//void bubblesort(int *a,int n)
//{
//	int count = n;
//	while (count--)
//	{
//		for (int i = 1; i < n; i++)
//		{
//			if (a[i] < a[i-1])
//			{
//				swap(a[i], a[i - 1]);
//			}
//		}
//		cout << "bubblesort" << endl;
//		print(a, n);
//	}
//}
//void selectionsort(int *a,int n)
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
//
//		}
//		swap(a[min], a[begin]);
//		swap(a[max], a[end]);
//		begin++; end--;
//		cout << "selectionsort" << endl;
//		print(a, n);
//	}
//}
//void quicksort(int* a,int begin,int end)
//{
//	if (begin >= end)return;
//	int left = begin, right = end, key = begin;
//	while (begin < end)
//	{
//		while (a[end] >= a[key] && end > begin)
//		{
//			--end;
//		}
//		while (a[begin] <= a[key] && begin < end)
//		{
//			++begin;
//		}
//		swap(a[begin], a[end]);
//	}
//	swap(a[end], a[key]);
//	key = end;
//	cout << "quicksort" << endl;
//	print(a, 12);
//	quicksort(a, left, key-1);
//	quicksort(a, key + 1, right);
//}
//void insertsort(int *a,int n)
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
//			}
//			else
//			{
//				break;
//			}
//		}
//		a[end + 1]=temp;
//		cout << "insertsort" << endl;
//		print(a, n);
//	}
//}
//void shellsort(int *a,int n)
//{
//	int gap = n;
//	while (gap > 1)
//	{
//		gap =gap/ 2;
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
//				}
//				else
//				{
//					break;
//				}
//			}
//			a[end + gap] = temp;
//		}
//		cout << "shellsort" << endl;
//		print(a, n);
//	}
//}
//void adjustdown(int* a, int n, int root)
//{
//	int parent = root;
//	int child = 2 * parent + 1;
//	while (child < n)
//	{
//		if (a[child] < a[child + 1]&&child+1<n)
//		{
//			child++;
//		}
//		if (a[child] > a[parent])
//		{
//			swap(a[child], a[parent]);
//			parent = child;
//			child = 2 * parent + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//void heapsort(int* a, int n)
//{
//	//排升序，建大堆
//	//从第一个非叶子结点开始向下调整，一直到根
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
//		cout << "heapsort" << endl;
//		print(a, n);
//	}
//}
//void mergesort(int* a, int left, int right, int* temp)
//{
//	if (left >= right)return;
//	int mid = left + (right - left) / 2;
//	mergesort(a, left, mid, temp);
//	mergesort(a, mid+1, right, temp);
//	int begin1 = left, end1 = mid, begin2 = mid + 1, end2 = right;
//	int i = left;
//	while (begin1 <= end1 && begin2 <= end2)
//	{
//		if (a[begin1] < a[begin2])
//		{
//			temp[i] = a[begin1];++begin1;
//		}
//		else
//		{
//			temp[i] = a[begin2]; ++begin2;
//		}
//		++i; 
//	}
//	//当遍历完其中一个区间，将另一个区间剩余的数据直接放到temp后面
//	while (begin1 <= end1)
//	{
//		temp[i] = a[begin1];
//		++i; ++begin1;
//	}
//	while (begin2 <= end2)
//	{
//		temp[i] = a[begin2];
//		++i; ++begin2;
//	}
//	for (int j = left; j <= right; j++)
//	{
//		a[j] = temp[j];
//	}
//	cout << "mergesort" << endl;
//	print(a, 12);
//}
//void mergeact(int *a, int n)
//{
//	int* temp = (int*)malloc(sizeof(int) * n);
//	mergesort(a, 0, n - 1, temp);
//}
//int getnumber1(int n)
//{
//	n %= 10;
//	return n;
//}
//int getnumber2(int n)
//{
//	n /= 10;
//	return n;
//}
//void radixsort(int *a,int n,int k)
//{
//	int aa[12][12] = { 0 };
//	if (k==1)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			int j = 0;
//			while (aa[getnumber1(a[i])][j] != 0)
//			{
//				j++;
//			}
//			aa[getnumber1(a[i])][j] = a[i];
//		}
//	}
//	else {
//		for (int i = 0; i < n; i++)
//		{
//			int j = 0;
//			while (aa[getnumber2(a[i])][j] != 0)
//			{
//				j++;
//			}
//			aa[getnumber2(a[i])][j] = a[i];
//		}
//	}
//	int b = 0;int j = 0;
//	for (int i = 0; i < n; i++)
//	{
//		
//		while (aa[b][j]==0)
//		{
//			if (aa[b][j] == 0 && aa[b][j + 1] == 0)
//			{
//				b++; j = 0;
//			}
//			else
//			{
//				j++;
//			}
//		}
//		a[i] = aa[b][j]; j++;	
//	}
//	cout << "radixsort" << endl;
//	print(a, n);
//}
//int main()
//{
//	int n = 12; srand((unsigned)time(NULL));
//	int a[12] = {};
//	for (int i = 0; i < n; i++)
//	{
//		a[i] = rand();
//	}
//	cout << "原来数组：";
//	print(a, n); int y = 0;
//	cout << "bubblesort:1 insertsort:2 selection:3 quicksort:4" << endl;
//	cout << "shellsort:5 mergesort:6 heapsort:7 radixsort:9" << endl;
//	while (cin >> y)
//	{
//
//		switch (y)
//		{
//		case 1:
//			bubblesort(a, n);
//			print(a, n);
//			break;
//		case 2:
//			insertsort(a, n);
//			print(a, n);
//			break;
//		case 3:
//			selectionsort(a, n);
//			print(a, n);
//			break;
//		case 4:
//			quicksort(a, 0,n-1);
//			print(a, n);
//			break;
//		case 5:
//			shellsort(a, n);
//			print(a, n);
//			break;
//		case 6:
//			mergeact(a, n);
//			print(a, n);
//			break;
//		case 7:
//			heapsort(a, n);
//			print(a, n);
//			break;
//		case 8:
//			radixsort(a, n, 1);
//			radixsort(a, n, 0);print(a, n);
//			break;
//		}
//
//	}
//}