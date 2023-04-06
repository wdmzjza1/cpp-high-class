#include<iostream>
using namespace std;
template<class T>
void myswap(T a, T b)
{
	T temp = a;
	a = b;
	b = temp;
}
// 1、自动类型推导，必须推导出一致的数据类型T,才可以使用
void test1()
{
	int a = 1;
	int b = 2;
	char c = 'a';
	myswap(a, b);
	myswap(a, c);
}

// 2、模板必须要确定出T的数据类型，才可以使用
template<class T>
void func()
{
	cout << "func函数调用" << endl;
}
void test2()
{
	func();//错误，模板不能独立使用，必须确定出T的类型
	func<int>(); //利用显示指定类型的方式，给T一个类型，才可以使用该模板
}