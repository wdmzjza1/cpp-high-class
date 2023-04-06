#include<iostream>
using namespace std;
template<class nametype,class agetype>
class person
{
public:
	person(nametype name, agetype age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	void showperson()
	{
		cout << "name: " << this->m_name << "age: " << this->m_age << endl;
	}
public:
	nametype m_name;
	agetype m_age;
};
void test1()
{
	person<string, int>p1("张三", 18);
	p1.showperson();
}
int main()
{
	test1();
	system("pause");
	return 0;
}