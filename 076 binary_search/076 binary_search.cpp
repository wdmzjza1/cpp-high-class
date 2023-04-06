#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

void test1()
{
	vector<int>v;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	bool ret = binary_search(v.begin(), v.end(), 6);
	if (ret)
	{
		cout << "找到了" << endl;
	}
	else
	{
		cout << "未找到" << endl;
	}
}

int main()
{
	test1();
}