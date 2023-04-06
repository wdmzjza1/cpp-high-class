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

	printdeque(d);

	d.pop_back();

	d.pop_front();
	printdeque(d);
}

void test2()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);

	d.push_front(100);
	d.push_front(200);
	printdeque(d);

	d.insert(d.begin(), 1000);
	printdeque(d);

	d.insert(d.begin(), 2, 10000);

	deque<int> d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	d.insert(d.begin(), d2.begin(), d2.end());
	printdeque(d);


}

void test3()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);

	d.push_front(100);
	d.push_front(200);
	printdeque(d);

	d.erase(d.begin());
	printdeque(d);

	d.erase(d.begin(), d.end());
	d.clear();
	printdeque(d);
}

int main()
{
	test1();
	test2();
	test3();

}