#include<iostream>
using namespace std;
class person
{
public:
	person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	string m_name;
	int m_age;
};
//普通函数模板
template<class t>
bool mycompare(t &a, t &b)
{
	if (a == b)
	{
		return true;
	}
	if (a != b)
	{
		return false;
	}
}

//具体化，显示具体化的原型和定意思以template<>开头，并通过名称来指出类型
//具体化优先于常规模板
template<> bool mycompare(person& a, person& b)
{
	if (a.m_age == b.m_age && a.m_name == b.m_name)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void test1()
{
	int a = 10;
	int b = 10;
	//内置数据类型可以直接使用通用的函数模板
	if (mycompare(a, b))
	{
		cout << "a==b" << endl;
	}
	else
	{
		cout << "a!=b" << endl;
	}
}

void test2()
{
	person p1("张三", 18);
	person p2("李四", 18);
	//自定义数据类型，不会调用普通的函数模板
	//可以创建具体化的Person数据类型的模板，用于特殊处理这个类型
	if(mycompare(p1, p2))
	{
		cout << "p1==p2" << endl;
	}
	else
	{
		cout << "p1!=p2" << endl;
	}
}

int main()
{
	test1();
	test2();
}
