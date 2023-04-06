#include"myarray.hpp"


void printintarray(myarray<int>& arr)
{
	for (int i = 0; i < arr.getsize(); i++)
	{
		cout << arr[i] << "";
	}
	cout << endl;
}

void test1()
{
	//myarray<int> p1(10);
	//myarray<int> p2(p1);
	//myarray<int> p3(100);
	//p3 = p1;

	myarray<int>array1(10);
	for (int i = 0; i < 10; i++)
	{
		array1.push_back(i);
	}
	cout << "array打印输出：" << endl;
	printintarray(array1);
	cout << "array1的大小：" << array1.getsize() << endl;
	cout << "array1的容量" << array1.getcapacity() << endl;

	cout << "........................" << endl;
	myarray<int>array2(array1);
	printintarray(array1);
	cout << "array1的大小：" << array1.getsize() << endl;
	cout << "array1的容量" << array1.getcapacity() << endl;
}


class person
{
public:
	person() {}
	person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

public:
	string m_name;
	int m_age;

};

void printpersonarray (myarray<person>& personarr)
{
	for (int i = 0; i < personarr.getsize(); i++)
	{
		cout << "姓名：" << personarr[i].m_name << "年龄：" << personarr[i].m_age << endl;
	}
}

void test2()
{
	myarray<person> parray(10);
	person p1("孙悟空", 30);
	person p2("韩信", 20);
	person p3("妲己", 18);
	person p4("王昭君", 15);
	person p5("赵云", 24);

	parray.push_back(p1);
	parray.push_back(p2);
	parray.push_back(p3);
	parray.push_back(p4);
	parray.push_back(p5);

	printpersonarray(parray);

	cout << "parray的大小" << parray.getsize() << endl;
	cout << "parray的容量" << parray.getcapacity() << endl;
}


int main()
{
	test1();
	test2();
}
