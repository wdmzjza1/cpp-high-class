#include<iostream>
using namespace std;
#include<map>

void test1()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));


	map<int, int>::iterator pos = m.find(3);

	if (pos != m.end())
	{
		cout << "找到了元素key=" << (*pos).first << "value=" << (*pos).second << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}
	
	int num = m.count(3);
	cout << "num=" << num << endl;

}

int main()
{
	test1();
}