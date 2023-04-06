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

	p.push_back(20);
	p.push_back(30);
	p.push_back(40);

	p.push_front(100);
	p.push_front(200);
	p.push_front(300);

	printlist(p);

	p.pop_back();
	p.pop_front();
	printlist(p);

	list<int>::iterator it = p.begin();
	p.insert(++it, 1000);
	printlist(p);

	it = p.begin();
	p.erase(++it);
	printlist(p);

	p.push_back(10000);
	p.push_back(10000);
	p.push_back(10000);
	p.push_back(10000);
	printlist(p);
	p.remove(10000);
	printlist(p);

	p.clear();
	printlist(p);

}

int main()
{
	test1();
}