#include<iostream>
using namespace std;
#include<vector>
#include<numeric>
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
	vector<int> v;
	v.resize(10);

	fill(v.begin(), v.end(), 100);

	for_each(v.begin(), v.end(), myprint());
	cout << endl;
}

int main()
{
	test1();
}