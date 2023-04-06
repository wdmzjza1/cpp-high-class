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
	vector<int> v1;
	//尾插
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	printvector(v1);

	//尾删
	v1.pop_back();
	printvector(v1);

	//插入
	v1.insert(v1.begin(), 100);
	printvector(v1);

	v1.insert(v1.begin(), 2, 100);
	printvector(v1);

	//删除
	v1.erase(v1.begin());
	printvector(v1);

	v1.erase(v1.begin(), v1.end());
	printvector(v1);

	v1.clear();
	printvector(v1);

}

int main()
{
	test1();
}