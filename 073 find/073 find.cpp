#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

void test1()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i + 1);
	}

	vector<int>::iterator it = find(v.begin(), v.end(), 5);
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

	bool operator==(const person& p)
	{
		if (this->m_name == p.m_name && this->m_age == p.m_age)
		{
			return true;
		}
		return false;
	}

public:
	string m_name;
	int m_age;
};

void test2()
{
	vector<person> v;

	person p1("aaa", 10);
	person p2("bbb", 20);
	person p3("ccc", 30);
	person p4("ddd", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<person>::iterator it = find(v.begin(), v.end(), p2);
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





