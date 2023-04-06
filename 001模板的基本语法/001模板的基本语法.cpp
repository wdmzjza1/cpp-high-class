#include<iostream>
using namespace std;
template<typename T>
void myswap(T&a, T&b)
{
	T temp=a;
	a = b;
	b = temp;
	
}
void test1()
{
	int a = 1;
	int b = 2;
	//利用模板实现交换
//1、自动类型推导
	myswap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	//2、显示指定类型
	myswap<int>(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

}
int main()
{
	test1();
	system("pause");
	return 0;
}