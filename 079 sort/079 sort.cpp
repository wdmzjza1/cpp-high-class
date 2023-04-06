#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

void myprint(int val)
{
	cout << val << " ";
}

void test1()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), myprint);
	cout << endl;

	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), myprint);
	cout << endl;
}

int main()
{
	test1();
}