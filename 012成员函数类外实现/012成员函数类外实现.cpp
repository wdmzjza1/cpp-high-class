#include<iostream>
using namespace std;
template<class t1,class t2>
class person
{
public:
	person(t1 name, t2  age);
	void showperson();

public:
	t1 m_name;
	t2 m_age;
};

//构造函数 类外实现
template<class t1,class t2>
person<t1, t2>::person(t1 name, t2 age)
{
	this->m_name = name;
	this->m_age = age;
}

//成员函数 类外实现
template<class t1,class t2>
void person<t1, t2>::showperson()
{
	cout << "name: " << this->m_name << endl;
	cout << "age: " << this->m_age << endl;
}

void test1()
{
	person<string, int> p("张三", 18);
	p.showperson();
}
int main()
{
	test1();
}