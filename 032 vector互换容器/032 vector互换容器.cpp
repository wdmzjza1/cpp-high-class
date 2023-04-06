#include<iostream>
using namespace std;
#include<vector>

void printvector(vector<int>& p)
{
	for (vector<int>::iterator it = p.begin(); it != p.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test1()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printvector(v1);

	vector<int>v2;
	for (int i = 0; i > 0; i--)
	{
		v2.push_back(i);
	}
	printvector(v2);

	cout << "互换后" << endl;
	v1.swap(v2);
	printvector(v1);
	printvector(v2);

}

void test2()
{
	vector<int>v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}

	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;

	v.resize(3);

	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;

	//收缩内存
	vector<int>(v).swap(v);
	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;

}

int main()
{
	test1();
	test2();
}