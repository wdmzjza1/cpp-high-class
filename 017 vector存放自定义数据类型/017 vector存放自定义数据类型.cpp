#include<iostream>
using namespace std;
#include<vector>

class person
{
public:
	person(string name, int age)
	{
		mname = name;
		mage = age;
	}
public:
	string mname;
	int mage;
};

void test1()
{
	vector<person> v;

	person p1("aaa", 10);
	person p2("bbb", 20);
	person p3("ccc", 30);
	person p4("ddd", 40);
	person p5("eee", 50);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	for (vector<person>::iterator p = v.begin(); p != v.end(); p++)
	{
		cout << "姓名：" << p->mname << " 年龄： " << p->mage << endl;
	}
}

void test2()
{
	vector<person*> v;

	person p1("aaa", 10);
	person p2("bbb", 20);
	person p3("ccc", 30);
	person p4("ddd", 40);
	person p5("eee", 50);

	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	for (vector<person*>::iterator p = v.begin(); p != v.end(); p++)
	{
		cout << "姓名：" << (*p)->mname << " 年龄： " << (*p)->mage << endl;
	}
}

int main()
{
	test1();
	test2();
}