#include<iostream>
using namespace std;

void pos(int pos)
{
	if (pos == -1)
	{
		cout << "未找到" << endl;
	}
	else
	{
		cout << "pos=" << pos << endl;
	}
};
void test1()
{

	string s1 = "hello world world hello";
	int pos1 = s1.find("hello",11);//查找str第一次出现位置,从pos开始查找

	if (pos1 == -1)
	{
		cout << "未找到" << endl;
	}
	else
	{
		cout << "pos1=" << pos1 << endl;
	}

	int pos2 = s1.find("world", 0,3); //从pos位置查找s的前n个字符第一次位置

	if (pos2 == -1)
	{
		cout << "未找到" << endl;
	}
	else
	{
		cout << "pos2=" << pos2 << endl;
	}

	int pos3 = s1.find('o', 0);
	pos(pos3);

	int pos4 = s1.rfind("world",15);
	pos(pos4);
}

void test2()
{
	string str1 = "hello world";
	str1.replace(0, 5, "world");
	cout << str1 << endl;
}

int main()
{
	test1();
	test2();
}