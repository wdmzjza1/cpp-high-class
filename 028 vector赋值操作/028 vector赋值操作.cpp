﻿#include<iostream>
using namespace std;
#include<vector>

void printvector(vector<int>& p)
{
	for (vector<int>::iterator it = p.begin(); it != p.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test1()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printvector(v1);

	vector<int> v2;
	v2 = v1;
	printvector(v2);

	vector<int> v3;
	v3.assign(v1.begin(), v1.end());
	printvector(v3);

	vector<int> v4;
	v4.assign(10, 100);
	printvector(v4);

}

int main()
{
	test1();
}