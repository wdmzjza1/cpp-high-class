#include<iostream>
using namespace std;
#include<map>

void printmap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key=" << it->first << "value=" << it->second << endl;
	}
	cout << endl;
}

void test1()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(map<int, int>::value_type(3, 30));

	m[4] = 40;
	printmap(m);

	m.erase(m.begin());
	printmap(m);

	m.erase(m.begin());
	printmap(m);

	m.erase(3);
	printmap(m);

	m.erase(m.begin(), m.end());
	m.clear();
	printmap(m);

}

int main()
{
	test1();
}