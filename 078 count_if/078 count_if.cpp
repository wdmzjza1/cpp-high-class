#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class greater4
{
public:
	bool operator()(int val)
	{
		return val >= 4;
	}
};

void test1()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(5);
	v.push_back(3);
	v.push_back(4);
	v.push_back(4);
	
	int num = count_if(v.begin(), v.end(), greater4());

	cout << "大于四的个数为：" << num << endl;
}

class person
{
public:
	person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	//bool operator==(const person& p)
	//{
	//	if (this->m_age == p.m_age)
	//	{
	//		return true;
	//	}
	//	else
	//	{
	//		return false;
	//	}
	//}
	string m_name;
	int m_age;
};

class ageless35
{
public:
	bool operator()(const person& p)
	{
		return p.m_age < 35;
	}
};

void test2()
{
	vector<person> v;

	person p1("刘备", 35);
	person p2("关羽", 35);
	person p3("张飞", 35);
	person p4("赵云", 25);
	person p5("曹操", 25);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);


	int num = count_if(v.begin(), v.end(), ageless35());
	cout << "小于35岁的个数：" << num << endl;
}


int main()
{
	test1();
	test2();
}