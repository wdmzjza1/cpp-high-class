#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class greaterfive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};
void test1()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator it = find_if(v.begin(), v.end(), greaterfive());
	if (it == v.end())
	{
		cout << "没找到！" << endl;
	}
	else
	{
		cout << "找到：" << *it << endl;
	}

}


int main()
{
	test1();
}