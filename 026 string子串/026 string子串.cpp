#include<iostream>
using namespace std;

void test1()
{
	string str = "abcdefg";
	string substr = str.substr(1, 3);
	cout << "substr=" << substr << endl;

	string str2 = "176390@qq.com";
	int ref = str2.find("@");
	string substr2=str2.substr(0, ref);
	cout << substr2 << endl;

}
int main()
{
	test1();
}