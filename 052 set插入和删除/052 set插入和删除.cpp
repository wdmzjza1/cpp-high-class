#include<iostream>
using namespace std;
#include<set>

void printset(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test1()
{
	set<int> s1;


	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);

	printset(s1);

	s1.erase(s1.begin());
	printset(s1);

	s1.erase(30);
	printset(s1);

	s1.clear();
	printset(s1);
}

int main()
{
	test1();
}