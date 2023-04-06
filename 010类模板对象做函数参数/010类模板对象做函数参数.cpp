#include<iostream>
using namespace std;
template<class t1,class t2=int>
class person
{
public:
	person(t1 name, t2 age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	void showperson()
	{
		cout << "name: " << this->m_name << "age: " << this->m_age << endl;
	}
public:
	t1 m_name;
	t2 m_age;
};

void printperson1(person<string, int>& p)
{
	p.showperson();
}


void test1()
{
	person<string,int>p("张三", 18);
	printperson1(p);
}

template<class t1,class t2>
void printperson2(person<t1,t2> &p)
{
	cout << "t1的类型为：" << typeid(t1).name() << endl;
	cout << "t2的类型为：" << typeid(t2).name() << endl;
	p.showperson();
}
void test2()
{
	person<string, int> p("李四", 20);
	printperson2(p);
}

template<class t>
void printperson3(t& p)
{
	cout << "t的类型为：" << typeid(t).name() << endl;
	p.showperson();
}
void test3()
{
	person<string, int> p("王五", 19);
	printperson3(p);
}
int main()
{
	test1();
	test2();
	test3();

	system("pause");
	return 0;
}