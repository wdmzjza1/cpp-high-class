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

bool mycompare(int val1, int val2)
{
	return val1 > val2;
}

void test1()
{
	list<int>l;
	l.push_back(90);
	l.push_back(30);
	l.push_back(20);
	l.push_back(70);

	printlist(l);

	l.reverse();
	printlist(l);

	l.sort();
	printlist(l);

	l.sort(mycompare);
	printlist(l);
}

int main()
{
	test1();
}