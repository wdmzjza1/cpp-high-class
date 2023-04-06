#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>

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
	deque<int> d;
	d.push_back(10);
	d.push_back(10);
	d.push_front(100);
	d.push_front(200);

	printdeque(d);
	sort(d.begin(), d.end());
	printdeque(d);

}

int main()
{
	test1();
}