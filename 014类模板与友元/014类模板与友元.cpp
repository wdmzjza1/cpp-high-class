#include<iostream>
using namespace std;

template<class t1,class t2>
class pereson;

template<class t1,class t2>
void printperson2(person<t1, t2>&p);


template<class t1,class t2>
class person
{
	//1、全局函数配合友元   类内实现
	friend void printperson(person<t1,t2> &p)
	{
		cout << "类内实现-------姓名： " << p.m_name << "年龄： " << p.m_age<<endl;
	}

	friend void printperson2<>(person<t1, t2>& p);
public:
	person<t1, t2>(t1 name, t2 age)
	{
		this->m_name = name;
		this->m_age = age;
	}

private:
	t1 m_name;
	t2 m_age;
};



//2、全局函数在类外实现
template<class t1,class t2>
void printperson2(person<t1,t2>&p)
{
	cout << "类外实现-------姓名： " << p.m_name << "年龄： " << p.m_age << endl;
}


void test1()
{
	person<string,int> p("张三",18);

	printperson(p);
}

void test2()
{
	person<string, int> p("张三", 18);

	printperson2(p);
}

int main()
{
	test1();
	test2();
}