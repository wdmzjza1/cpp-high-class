#include<iostream>
using namespace std;
#include<list>

void printlist(const list<int>& p)
{
	for (list<int>::const_iterator it = p.begin(); it != p.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test1()
{
	list<int> p;
	p.push_back(10);
	p.push_back(20);
	p.push_back(30);
	p.push_back(40);

	if (p.empty())
	{
		cout << "p为空" << endl;
	}
	else
	{
		cout << "p不为空" << endl;
		cout << "p的大小为：" << p.size() << endl;
	}

	p.resize(10);
	printlist(p);

	p.resize(2);
	printlist(p);
}

int main()
{
	test1();
}