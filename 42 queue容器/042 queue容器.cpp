﻿#include<iostream>
using namespace std;
#include<queue>

class person
{
public:
	person(string name, int age)
	{
		this->m_age = age;
		this->m_name = name;
	}
	string m_name;
	int m_age;
};

void test1()
{
	queue<person> q;

	person p1("唐僧", 30);
	person p2("孙悟空", 1000);
	person p3("猪八戒", 900);
	person p4("沙僧", 800);

	
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	while (!q.empty())
	{
		cout << "队头元素-- 姓名：" << q.front().m_name << "年龄：" << q.back().m_age << endl;
		cout << "队尾元素-- 姓名：" << q.back().m_name << " 年龄：" << q.back().m_age << endl;

		q.pop();
	}

	cout << "队列大小为：" << q.size() << endl;
}

int main()
{
	test1();
}