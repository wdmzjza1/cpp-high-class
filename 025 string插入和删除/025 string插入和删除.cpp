#include<iostream>
using namespace std;

void test1()
{
	string str = "hello";
	str.insert(0, "111");
	cout << str << endl;

	str.erase(0, 3);
	cout << str << endl;
}

int main()
{
	test1();
}