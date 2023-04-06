#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void myprint(int val)
{
	cout << val << endl;
}

void test1()
{
	//创建vector容器对象，并且通过模板参数指定容器中存放的数据的类型
	vector<int> v;
	//向容器中放数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//每一个容器都有自己的迭代器，迭代器是用来遍历容器中的元素
	//v.begin()返回迭代器，这个迭代器指向容器中第一个数据
	//v.end()返回迭代器，这个迭代器指向容器元素的最后一个元素的下一个位置
	//vector<int>::iterator 拿到vector<int>这种容器的迭代器类型
	vector<int>::iterator pbegin = v.begin();
	vector<int>::iterator pend = v.end();

	//第一种遍历方式：
	while (pbegin != pend)
	{
		cout << *pbegin << endl;
		pbegin++;
	}

	//第二种遍历方式：
	for (vector<int>::iterator p = v.begin(); p != v.end(); p++)
	{
		cout << *p << endl;
	}

	//第三种遍历方式：
	//使用STL提供标准遍历算法  头文件 algorithm
	for_each(v.begin(), v.end(), myprint);

}

int main()
{
	test1();
}