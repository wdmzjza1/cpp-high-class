#include<iostream>
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

	deque<int>d2;
	d2 = d1;
	printdeque(d2);

	deque<int>d3;
	d3.assign(d1.begin(), d1.end());
	printdeque(d3);

	deque<int>d4;
	d4.assign(10, 100);
	printdeque(d4);
}

int main()
{
	test1();
}