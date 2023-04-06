#include<iostream>
using namespace std;
void test1()
{
	string s1 = "aello";
	string s2 = "hello";
	int ref=s1.compare(s2);
	if (ref == 0)
	{
		cout << "s1==s2" << endl;
	}
	else if (ref > 0)
	{
		cout << "s1>s2" << endl;
	}
	else
	{
		cout << "s1<s2" << endl;
	}
}

int main()
{
	test1();
}