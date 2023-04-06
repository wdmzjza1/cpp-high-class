#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

class transform1
{
public:
	int operator()(int val)
	{
		return val;
	}
};

class myprint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test1()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>vtarget;

	vtarget.resize(v.size());

	transform(v.begin(), v.end(), vtarget.begin(), transform1());

	for_each(vtarget.begin(), vtarget.end(), myprint());
	
}

int main()
{
	test1();
}