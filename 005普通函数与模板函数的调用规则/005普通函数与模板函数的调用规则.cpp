#include<iostream>
using namespace std;
//调用规则如下：
//
//1. 如果函数模板和普通函数都可以实现，优先调用普通函数
//2. 可以通过空模板参数列表来强制调用函数模板
//3. 函数模板也可以发生重载
//4. 如果函数模板可以产生更好的匹配, 优先调用函数模板
//

void myprint(int a, int b)
{
	cout << "调用的普通函数" << endl;
}
template<class t>
void myprint(t a, t b)
{
	cout << "调用的模板" << endl;
}
template<class t>
void myprint(t a, t b,t c)
{
	cout << "调用的模板" << endl;
}


void func()
{
	cout << "调用的普通函数2" << endl;
}
template<class t>
void func()
{
	cout << "调用的模板2" << endl;
}
template<class t>
void func(t a)
{
	cout << "调用的模板"<<a << endl;
}

void test1()
{
	//1、如果函数模板和普通函数都可以实现，优先调用普通函数
	// 注意 如果告诉编译器  普通函数是有的，但只是声明没有实现，或者不在当前文件内实现，就会报错找不到
	int a = 10;
	int b = 20;
	myprint(a, b); //调用普通函数

	//2、可以通过空模板参数列表来强制调用函数模板
	myprint<>(a, b);//调用函数模板

	//3、函数模板也可以发生重载
	int c = 30;
	myprint(a, b, c);

	//4、 如果函数模板可以产生更好的匹配,优先调用函数模板
	char d = 'd';
	char e = 'e';
	myprint(d, e);

	func();
	func<int>();
	func(a);
}
int main()
{
	test1();
}
