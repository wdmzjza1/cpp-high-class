#include<iostream>
using namespace std;
#include<map>

void printmap(map<int,int>&m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key值：" << it->first << "value值:" << it->second << endl;
	}
	cout << endl;
}

void test1()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));

	if (m.empty())
	{
		cout << "m为空" << endl;
	}
	else
	{
		cout << "m不为空" << endl;
		cout << "m的大小为：" << m.size() << endl;
	}
}

void test2()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));
	
	map<int, int> m2;
	m2.insert(pair<int, int>(4,100));
	m2.insert(pair<int, int>(5, 200));
	m2.insert(pair<int, int>(6, 300));
	m2.insert(pair<int, int>(7, 400));

	cout << "交换前：" << endl;
	printmap(m);
	printmap(m2);

	cout << "交换后：" << endl;
	m.swap(m2);
	printmap(m);
	printmap(m2);

}

int main()
{
	test1();
}