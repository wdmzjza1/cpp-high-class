﻿#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

class myprint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

class replacegreater30
{
public:
	bool operator()(int val)
	{
		return val >= 30;
	}
};
void test1()
{
	vector<int> v;
	v.push_back(20);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);
	v.push_back(10);
	v.push_back(20);
	

	cout << "替换前：" << endl;
	for_each(v.begin(), v.end(), myprint());
	cout << endl;

	cout << "替换后：" << endl;
	replace_if(v.begin(), v.end(), replacegreater30(), 3000);
	for_each(v.begin(), v.end(), myprint());
	cout << endl;
}

int main()
{
	test1();
}