#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<ctime>

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
	srand((unsigned int)time(NULL));
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), myprint());
	cout << endl;


	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), myprint());
	cout << endl;
}

int main()
{
	test1();
}