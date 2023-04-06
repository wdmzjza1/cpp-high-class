#include<iostream>
using namespace std;
class person1
{
public:
	void showperson1()
	{
		cout << "show person1" << endl;
	}
};

class person2
{
public:
	void showperson2()
	{
		cout << "show person2" << endl;
	}
};

template<class t>
class myclass
{
public:
	t obj;
	//类模板中的成员函数，并不是一开始就创建的，而是在模板调用时再生成
	void func1()
	{
		obj.showperson1();
	}
	void func2()
	{
		obj.showperson2();
	}
};