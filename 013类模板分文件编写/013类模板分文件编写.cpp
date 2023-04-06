#include<iostream>
using namespace std;

//#include"person.h"
//解决方式1，包含cpp源文件
//#include"person.cpp"


//解决方式2，将声明和实现写到一起，文件后缀名改为.hpp
#include"person.hpp"


void test1()
{
	person<string, int> p("张三", 18);
	p.showperson();
}

int main()
{
	test1();
}