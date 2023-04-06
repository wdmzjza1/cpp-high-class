#include<iostream>
using namespace std;
#include<list>

void test1()
{
	list<int>p;
	p.push_back(10);
	p.push_back(20);
	p.push_back(30);
	p.push_back(40);

	//cout << p.at(0) << endl;错误 不支持at访问数据
	//cout << p[0] << endl;错误  不支持[]方式访问数据

	cout << "第一个元素为：" << p.front() << endl;
	cout << "最后一个元素为：" << p.back() << endl;

	//list容器的迭代器是双向迭代器，不支持随机访问

	list<int>::iterator it = p.begin();
	//it = it + 1;错误，不可以跳跃访问，即使是+1
}

int main()
{
	test1();
}