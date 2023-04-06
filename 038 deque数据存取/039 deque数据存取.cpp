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
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);

	for (int i = 0; i < d.size(); i++)
	{
		cout << d[i] <<" ";
	}
	cout << endl;

	for (int i = 0; i < d.size(); i++)
	{
		cout << d.at(i) << " ";
	}
	cout << endl;

	cout << "front:" << d.front() << endl;
	cout << "back:" << d.back()<<endl;
}

int main()
{
	test1();
}