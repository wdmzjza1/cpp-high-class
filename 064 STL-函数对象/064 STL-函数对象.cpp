#include<iostream>
using namespace std;

class myadd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

class myprint
{
public:
	myprint()
	{
		count = 0;
	}
	void operator()(string test)
	{
		cout << test << endl;
		count++;
	}
public:
	int count = 0;
};

void doprint(myprint& mp, string test)
{
	mp(test);
}


void test1()
{
	myadd myadd;
	cout << myadd(10, 10) << endl;
}

void test2()
{
	myprint myprint;
	myprint("hello world");
	myprint("hello world");
	myprint("hello world");
	cout << "myprint调用次数为：" << myprint.count << endl;
}

void test3()
{
	myprint myprint;
	doprint(myprint, "hello C++");
	cout << "myprint调用次数为：" << myprint.count << endl;
}



int main()
{
	test1();
	test2();
	test3();
}