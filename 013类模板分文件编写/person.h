#pragma once
#include<iostream>
using namespace std;

template<class t1,class t2>
class person 
{
public:
	person(t1 name, t2 age);
	void showperson();
public:
	t1 m_name;
	t2 m_age;
};