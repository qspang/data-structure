#include<iostream>
#include<vector>
#include<map>
#include<list>
#include<algorithm>
#include<functional>
#include<numeric>
using namespace std;
//常用遍历算法 for_each
void print01(int v)
{
	cout << v << " ";
}
class print02
{
public:
	void operator()(int v)
	{
		cout << v << " ";
	}
	print02();
	~print02();

private:

};

print02::print02()
{
}

print02::~print02()
{
}
void test1()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);

	}
	for_each(v.begin(), v.end(),print01);
	cout << endl;
	for_each(v.begin(), v.end(), print02());

}
//搬运容器到另一个容器
//常用的遍历算法transform
//在搬运的过程中对原来的容器的值做一些加减乘除的运算
class Transform
{
public:
	int operator()(int v)
	{
		return v+100;
	}


private:

};
class mprint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
	mprint();
	~mprint();

private:

};

mprint::mprint()
{
}

mprint::~mprint()
{
}

void test2()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>v2;
	//开辟好空间
	v2.resize(v.size());
	//会把v容器里面的值传到仿函数里面做运算 再把处理后的结果送到v2里面
	transform(v.begin(), v.end(), v2.begin(),Transform());
	for_each(v2.begin(), v2.end(), mprint());
	cout << endl;
}
//find 查找指定元素的迭代器 找不到返回结束迭代器end()
//查找内置数据类型
void test3()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//是否有6
	vector<int>::iterator it=find(v.begin(), v.end(), 6);
	if (it == v.end())
	{
		cout << "wu" << endl;
	}
	else
	{
		cout << "zhe" << *it << endl;
	}
}
//查找自定义数据类型

class person
{
public:
	person(string name, int age)
	{
		this->mage = age;
		this->mname = name;
	}
	//重载== 让底层find知道如何对比person数据类型
	bool operator==(const person& p)
	{
		if (this->mage == p.mage)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	/*bool operator==(const person& p)
	{
		if (this->mage == p.mage && this->mname == p.mname)
		{
			return true;
		}
		else
		{
			return false;
		}
	}*/
	string mname; int mage;
private:

};

void test4()
{
	vector<person>v;
	person p1("aaa",10);
	person p2("bbb",20);
	person p3("ccc",30);
	person p4("ddd",40);
	person p5("yyy",50);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	person pp("bbb", 20);
	vector<person>::iterator it = find(v.begin(), v.end(),pp);

	if (it == v.end())
	{
		cout << "wu" << endl;
	}
	else
	{
		cout << it->mname<<it->mage << endl;
	}



}
//find_if 常用的查找算法
//查找常用的数据类型
//有条件的查找

class greaterfive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}

private:

};

void test5()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>::iterator it=find_if(v.begin(), v.end(), greaterfive());
	if (it == v.end())
	{
		cout << "kong" << endl;
	}
	else
	{
		cout << "wei" << *it << endl;
	}
}
/// <summary>
///查找自定义类型
/// </summary>

class greaterr
{
public:
	bool operator()(person& p)
	{
		return p.mage > 20;
	}


private:

};
class greater20
{
public:
	bool operator()(int val)
	{
		return val > 20;
	}
	greater20();
	~greater20();

private:

};

greater20::greater20()
{
}

greater20::~greater20()
{
}
void test6()
{
	vector<person>v;

	person p1("aaa", 10);
	person p2("bbb", 20);
	person p3("ccc", 30);
	person p4("ddd", 40);
	person p5("yyy", 50);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//有条件的查找 找到年龄大于20的人
	vector<person>::iterator it = find_if(v.begin(), v.end(), greaterr());
	if (it == v.end())
	{
		cout << "kong" << endl;
	}
	else
	{
		cout <<it->mname<<it->mage<< endl;
	}

}
//常用查找算法adjacent_find查找相邻重复的元素
void test7()
{
	vector<int>v;
	v.push_back(2);
	v.push_back(3);
	v.push_back(20);
	v.push_back(0);
	v.push_back(1);
	v.push_back(2);
	v.push_back(200);
	v.push_back(8);

	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
	if (it == v.end())
	{
		cout << "未找到相邻重复元素" << endl;
	}
	else
	{
		cout << " 找到相邻重复元素" << *it << endl;
	}

}
//常用的查找算法 查找知道元素是否存在
//binary_search
//在无序的序列是不可以的 
void test8()
{
	vector<int>v;
	//必须为有序序列
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	bool ret=binary_search(v.begin(), v.end(), 9);
	if (ret)
	{
		cout << "yesy" << endl;
	}
	else
	{
		cout << "no" << endl;
	}
}
//count统计元素个数
//统计自定义内置数据类型
void test9()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);

	int num=count(v.begin(), v.end(), 40);
	cout << "num=" << num;

}
void test10()
{
	
	vector<person>v;
	person p1("aaa", 10);
	person p2("bbb", 20);
	person p3("ccc", 30);
	person p4("ddd", 40);
	person p5("yyy", 50);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	person p("aaa", 30);
	//这样子不知道怎么样对比
	int num = count(v.begin(), v.begin(), p);
	cout << "和aaa同岁岁数的人员个数为：" <<num<< endl;
}
//统计元素 那条件来 count_if
void test11()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(40);
	v.push_back(20);
	v.push_back(50);
	v.push_back(20);
	v.push_back(30);
	int num=count_if(v.begin(), v.end(), greater20());
	cout << "大于20的元素个数为：" << num << endl;
}
//统计自定义数据类型
class agegreater20
{
public:
	bool operator()(const person& p)
	{
		return p.mage > 20;
	}
	agegreater20();
	~agegreater20();

private:

};

agegreater20::agegreater20()
{
}

agegreater20::~agegreater20()
{
}
void test12()
{
	vector<person>v;
	person p1("刘备", 3);
	person p2("曹操", 20);
	person p3("关羽", 35);
	person p4("张飞", 40);
	person p5("赵云", 35);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	int num=count_if(v.begin(), v.end(),agegreater20() );
	cout << "大于20岁的人员个数为" << num << endl;
}
//常用的排序算法 sort 利用greater去改变排序
void test13()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);
	v.push_back(70);

	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), mprint());
	cout << endl;

	//模板库的函数greater 改变为降序 
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), mprint());

}
//常用排序算法 洗牌 在指定范围内的元素随机调整次序 random_shuffle
void test14()
{
	srand((unsigned int)time(NULL));


	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//利用洗牌 算法 来打乱顺序
	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), mprint());
	cout << endl;

}

//常用的排序 merge 两个容器合并 并且储存到另一个容器
//要求两个容器都是有序的 merge之后也是有序的
void test15()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 1);
	}

	vector<int>vt;
	vt.resize(v1.size() + v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vt.begin());
	for_each(vt.begin(), vt.end(),mprint());
	cout << endl;



}
//reverse 把容器内元素就行反转
void test16()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	cout << "反转前" << endl;
	for_each(v.begin(), v.end(), mprint());
	cout << endl;


	cout << "反转前" << endl;
	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), mprint());
	cout << endl;

}
//常用拷贝和替换算法 copy 容器指定范围的元素拷贝到另一个容器
//利用赋值操作就行了 提前开辟空间
void test17()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);

	}
	vector<int>v2;
	//提前开辟空间
	v2.resize(v1.size());
	copy(v1.begin(), v1.end(), v2.begin());


	for_each(v2.begin(), v2.end(), mprint());
	cout << endl;

}
//replace 把旧元素改为新元素 会把所有满足条件的都替换
void test18()
{
	vector<int>v;
	v.push_back(20);
	v.push_back(10);
	v.push_back(240);
	v.push_back(25);
	v.push_back(20);
	v.push_back(201);
	v.push_back(2044);
	v.push_back(203);

	cout << "替换前" << endl;
	for_each(v.begin(), v.end(), mprint());
	cout << endl;

	replace(v.begin(), v.end(), 20, 2000);
	for_each(v.begin(), v.end(), mprint());

}
//replace_if 条件替换
class greater30
{
public:
	bool operator()(int val)
	{
		return val >= 30;
	}
	greater30();
	~greater30();

private:

};

greater30::greater30()
{
}

greater30::~greater30()
{
}
void test19()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(10);
	v.push_back(40);
	v.push_back(10);
	v.push_back(60);
	v.push_back(90);

	for_each(v.begin(), v.end(), mprint());
	cout << endl;

	//讲大于等于30的替换为100000
	replace_if(v.begin(), v.end(), greater30(), 10000);
	for_each(v.begin(), v.end(), mprint());
	cout << endl;


}
//swap 放两个容器就行了 要两个同种容器
void test20()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 100);
	}
	cout << "qian" << endl;
	for_each(v1.begin(), v1.end(), mprint());
	for_each(v2.begin(), v2.end(), mprint());
	cout << endl;
	cout << "-----------------" << endl;
	cout << "hou" << endl;
	swap(v1, v2);
	for_each(v1.begin(), v1.end(), mprint());
	for_each(v2.begin(), v2.end(), mprint());
	cout << endl;


}
//accumulate 把容器的总和算出来
void test21()
{
	vector<int>v;
	for (int i = 0; i < 100; i++)
	{
		v.push_back(i);
	}
	//0表示起始积累值
	int total=accumulate(v.begin(), v.end(), 0);
	cout << "total" << total << endl;


}
//fill  向容器中填入指定值
void test22()
{
	vector<int>v;
	v.resize(10);

	//后期重新填充
	fill(v.begin(), v.end(), 100);
	for_each(v.begin(), v.end(), mprint());

}
/// <summary>
/// 常用的集合算法
/// </summary>
/// 求交集 并集 差集
/// 
/// 这个是交集 分配好内存
void test23()
{
	vector<int>v1;
	vector<int>v2;
	for(int i=0;i<10;i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	
	}
	vector<int>vt;
	//目标容器需要提前开辟空间
	//最特殊情况 大容器包含小容器 开辟空间 取小容器的size即可
	vt.resize(min(v1.size(), v2.size()));

	//获取交集
	vector<int>::iterator itend = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vt.begin());
	for_each(vt.begin(), itend, mprint());
	cout << endl;




}
//set union 求集合并集
void test24()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);

	}
	vector<int>vt;

	//提前开辟空间
	vt.resize(v1.size() + v2.size());
	vector<int>::iterator itend = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vt.begin());

	for_each(vt.begin(),itend, mprint());
	cout << endl;

}
//set difference来求差集
//求差集两个集合必须为有序序列
void test25()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);

	}
	vector<int>vt;
	//最特殊情况 两个容器没有交集 取两个容器中最大的size作为目标开辟空间
	vt.resize(max(v1.size(), v2.size()));
	cout << "v1和v2的差集为" << endl;
	vector<int>::iterator itend=set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vt.begin());
	for_each(vt.begin(), itend, mprint());
	cout << endl;



}

int main()
{
	test24();
}