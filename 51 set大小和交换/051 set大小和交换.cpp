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
	set<int>s1;
	
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);

	if (s1.empty())
	{
		cout << "s1为空" << endl;
	}

	else
	{
		cout << "s1不为空" << endl;
		cout << "s1的大小为：" << s1.size() << endl;
	}
}

void test2()
{
	set<int> s1;

	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);

	set<int> s2;

	s1.insert(100);
	s1.insert(200);
	s1.insert(300);
	s1.insert(400);

	cout << "交换前" << endl;
	printset(s1);
	printset(s2);
	cout << endl;

	cout << "交换后" << endl;
	s1.swap(s2);
	printset(s1);
	printset(s2);
}

int main()
{
	test1();
	test2();
}