#include<iostream>
using namespace std;

void test1()
{
	string s1 = "hello world";

	for (int i = 0; i < s1.size(); i++)
	{
		cout<<s1[i]<<" ";
	}
	cout << endl;
	for (int i = 0; i < s1.size(); i++)
	{
		cout << s1.at(i) << " ";
	}
	cout << endl;

	s1[0] = 'x';
	s1.at(1) = 'y';
	cout << s1 << endl;
}

int main()
{
	test1();
}