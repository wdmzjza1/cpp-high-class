#include<iostream>
using namespace std;
template<class t>
void myswap(t& a, t& b)
{
	t temp = a;
	a = b;
	b = temp;
}
template<class t>
void mysort(t arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i + 1; j < len; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		if (i != max)
		{
			myswap(arr[i], arr[max]);
		}
	}
}
template<class t>
void printarray(t arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void test1()
{
	char arr[] = { "abdcfeg" };
	int len = sizeof(arr) / sizeof(char);
	mysort(arr, len);
	printarray(arr, len);
	string str[] = { "a","c","b","f","g","e" };
	int num = sizeof(str) / sizeof(string);
	mysort(str, num);
	printarray(str, num);
	int intarr[] = { 100,56,9,74,55,33,20 };
	int len2 = sizeof(intarr) / sizeof(int);
	mysort(intarr, len2);
	printarray(intarr, len2);
}
int main()
{
	test1();
}