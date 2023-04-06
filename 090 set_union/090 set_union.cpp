#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class myprint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test1()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	vector<int> vtarget;
	vtarget.resize(v1.size() + v2.size());

	vector<int>::iterator itend = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());

	for_each(vtarget.begin(), itend, myprint());
	cout << endl;

}

int main()
{
	test1();
}