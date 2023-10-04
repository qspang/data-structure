//#include<iostream>
//#include<fstream>
//using namespace std;
//string sl[100];
//int read_file()
//{
//	fstream ifs; ifs.open("C:\\Users\\pqs-xsz-xia\\Desktop\\familytree.txt", ios::out|ios::in);
//	string s; char line[100]; int i = 0;
//	while (ifs.getline(line,sizeof(line)))
//	{
//		sl[i] = line;
//		i++;
//	}
//	ifs.close();
//	return i;
//}
//void test02()
//{
//
//	int sum = read_file(); string a, s, d, f, g, h, j, k, l;
//	int i = 0; string sk[100]; string kkk;
//	while (i < sum)
//	{
//		kkk = sl[i]; int j = 0;
//		while (s[j] != ' ') { a += s[j]; j++; }j++;
//		while (s[j] != ' ') { s += s[j]; j++; }j++;
//		while (s[j] != ' ') { d += s[j]; j++; }j++;
//		while (s[j] != ' ') { f += s[j]; j++; }j++;
//		while (s[j] != ' ') { g += s[j]; j++; }j++;
//		while (s[j] != ' ') { h += s[j]; j++; }j++;
//		while (s[j] != ' ') { j += s[j]; j++; }j++;
//		while (s[j] != ' ') { k += s[j]; j++; }j++;
//		while (s[j] != ' ') { l += s[j]; j++; }j++;
//		i++;
//		cout << a << " " << s << " " << d << " " << f << " " << g << " " << h << " " << j << " " << k << " " << l << " ";
//	}
//}
////void test()
////{
////	
////	fstream ifs;
////	ifs.open("C:\\Users\\pqs-xsz-xia\\Desktop\\familytree.txt", ios::in | ios::out);
////	string s;
////	while (ifs>>s)
////	{
////		if (atoi(s.c_str())==0)continue;
////		 cout << s << " ";
////		ifs >> s; cout << s<<" ";
////		ifs >> s; cout << s<<" ";
////		ifs >> s; cout << s<<" ";
////		ifs >> s; cout << s<<" ";
////		ifs >> s; cout << s<<" ";
////		ifs >> s; cout << s<<" ";
////		ifs >> s; cout << s<<" ";
////		ifs >> s; cout << s<<endl;
////	}
////	
////
////}
//int main()
//{
//	int sum = read_file(); test02();
//	/*cout << sl[0] << endl;
//	string s = sl[0];
//	cout << s.size()<< endl;*/
//}