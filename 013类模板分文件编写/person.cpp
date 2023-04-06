#include"person.h"

template<class t1,class t2>
person<t1, t2>::person(t1 name, t2 age)
{
	this->m_name = name;
	this->m_age = age;
}

template<class t1,class t2>
void person<t1, t2>::showperson()
{
	cout << this->m_name << endl;
	cout << this->m_age << endl;
}