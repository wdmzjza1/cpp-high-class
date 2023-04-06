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

	set<int>s2(s1);
	printset(s2);

	set<int>s3;
	s3 = s2;
	printset(s3);
}

int main()
{
	test1();
}