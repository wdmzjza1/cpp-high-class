#pragma once
#include<iostream>
using namespace std;

template<class t1, class t2>
class person
{
public:
	person(t1 name, t2 age);
	void showperson();
public:
	t1 m_name;
	t2 m_age;
};

template<class t1, class t2>
person<t1, t2>::person(t1 name, t2 age)
{
	this->m_name = name;
	this->m_age = age;
}

template<class t1, class t2>
void person<t1, t2>::showperson()
{
	cout << this->m_name << endl;
	cout << this->m_age << endl;
}