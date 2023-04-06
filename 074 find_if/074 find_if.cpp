#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

class greaterfive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};

void test1()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i + 1);
	}

	vector<int>::iterator it = find_if(v.begin(), v.end(), greaterfive());
	if (it == v.end())
	{
		cout << "没有找到！" << endl;
	}
	else
	{
		cout << "找到：" << *it << endl;
	}
}

class person
{
public:
	person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
public:
	string m_name;
	int m_age;
};

class greater20
{
public:
	bool operator()(person& p)
	{
		return p.m_age > 20;
	}
};

void test2()
{
	vector<person> v;

	person p1("aaa", 10);
	person p2("aaa", 20);
	person p3("aaa", 30);
	person p4("aaa", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<person>::iterator it = find_if(v.begin(), v.end(), greater20());
	if (it == v.end())
	{
		cout << "没有找到！" << endl;
	}
	else
	{
		cout << "找到：" << "年龄：" << it->m_age << "姓名：" << it->m_name << endl;
	}
}

int main()
{
	test1();
	test2();
}