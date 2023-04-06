#include<iostream>
using namespace std;
template<class t1,class t2>
void myswap(t1 a, t2 b)
{
	t1 temp = a;
	a = b;
	b = temp;
}
template<class pname,class page=int>
class person
{
public:
	person(pname name, page age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	void show()
	{
		cout << "name: " << m_name << " " << "age: " << this->m_age << endl;
	}
	pname m_name;
	page m_age;
};

//1、类模板没有自动类型推导的使用方式
void test1()
{
	//person p("张三", 18); // 错误 类模板使用时候，不可以用自动类型推导
	person<string, int>p("张三", 18);
	p.show();//必须使用显示指定类型的方式，使用类模板
}

//必须使用显示指定类型的方式，使用类模板
void test2()
{
	person<string> p("李四", 20); //类模板中的模板参数列表 可以指定默认参数
	p.show();
}

int main()
{
	test1();
	test2();
	system("pause");
	return 0;
}