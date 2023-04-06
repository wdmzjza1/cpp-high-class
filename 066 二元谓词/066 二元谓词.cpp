#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
class mycompare
{
public:
	bool operator()(int num1, int num2)
	{
		return num1 > num2;
	}
};

void test1()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(20);
	v.push_back(50);

	sort(v.begin(), v.end());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	cout << "----------------------------" << endl;

	sort(v.begin(), v.end(), mycompare());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	
}

int main()
{
	test1();
}