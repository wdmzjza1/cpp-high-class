﻿#include<iostream>
using namespace std;
#include<deque>

void printdeque(const deque<int>& p)
{
	for (deque<int>::const_iterator it = p.begin(); it != p.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test1()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printdeque(d1);

	if (d1.empty())
	{
		cout << "d1为空！" << endl;
	}
	else
	{
		cout << "d1不为空！" << endl;
		cout << "d1的大小为：" << d1.size()<<endl;
	}

	d1.resize(15, 1);
	printdeque(d1);

	d1.resize(5);
	printdeque(d1);
}

int main()
{
	test1();
}