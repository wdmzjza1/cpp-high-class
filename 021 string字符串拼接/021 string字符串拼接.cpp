#include<iostream>
using namespace std;

void test1()
{
	string s1 = "我喜欢";
	s1 += "打游戏";
	cout << s1 << endl;
	s1 += ',';
	cout << s1 << endl;
	s1 += "听歌";
	cout << s1 << endl;

	string s2 = "abc";
	s2.append("def");
	cout << s2 << endl;
	s2.append("ghijkl", 3);
	cout << s2 << endl;
	string s3 = "jkl";
	s2.append(s3);
	cout << s2 << endl;
	s2.append("jklmnopq", 4, 3);
	cout << s2<< endl;
}

int main()
{
	test1();
}