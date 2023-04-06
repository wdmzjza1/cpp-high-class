#include<iostream>
using namespace std;
#include<list>

void printlist(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test1()
{
	list<int>l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	printlist(l1);

	list<int>l2;
	l2 = l1;
	printlist(l2);

	list<int>l3;
	l3.assign(l2.begin(), l2.end());
	printlist(l3);

	list<int>l4;
	l4.assign(10, 100);
	printlist(l4);
}

void test2()
{
	list<int>l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	list<int>l2;
	l2.assign(10,100);

	cout << "交换前：" << endl;
	printlist(l1);
	printlist(l2);

	cout << endl;

	l1.swap(l2);

	cout << "交换后：" << endl;
	printlist(l1);
	printlist(l2);
}

int main()
{
	test1();
	test2();
}