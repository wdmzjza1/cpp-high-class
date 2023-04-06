#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void test1()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(5);
	v.push_back(2);
	v.push_back(4);
	v.push_back(4);
	v.push_back(3);

	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
	if (it == v.end())
	{
		cout << "找不到！" << endl;
	}
	else
	{
		cout << "找到相邻元素为：" << *it << endl;
	}
}

int main()
{
	test1();
}