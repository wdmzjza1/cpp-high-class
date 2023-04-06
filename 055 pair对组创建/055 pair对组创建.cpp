#include<iostream>
using namespace std;

void test1()
{
	pair<string, int> p(string("tom"), 20);
	cout << "姓名：" << p.first << "年龄：" << p.second << endl;

	pair<string, int>p2 = make_pair("jerry", 10);
	cout << "姓名：" << p.first << "年龄：" << p.second << endl;
}

int main()
{
	test1();
}