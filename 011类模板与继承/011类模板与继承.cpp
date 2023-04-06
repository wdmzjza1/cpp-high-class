#include<iostream>
using namespace std;
template<class t>
class base
{
	t m;
};

//class son :public base  //错误，c++编译需要给子类分配内存，必须知道父类中T的类型才可以向下继承
class son :public base<int>
{

};
void test1()
{
	son s1;
}

//类模板继承类模板 ,可以用T2指定父类中的T类型
template<class t1,class t2>
class son2 :public base<t2>
{
public:
	son2()
	{
		cout << typeid(t1).name() << endl;
		cout << typeid(t2).name() << endl;
	}
};

void test2()
{
	son2<string, int> p;
}

int main()
{
	test1();
	test2();
	system("pause");
	return 0;
}