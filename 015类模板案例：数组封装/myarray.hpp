#pragma once
#include<iostream>
using namespace std;

template<class t>
class myarray
{
public:
	myarray(int capacity)
	{
		cout << "参数构造函数" << endl;
		this->m_capacity = capacity;
		this->m_size = 0;
		paddress = new t[this->m_capacity];
	}

	myarray(const myarray& arr)
	{
		cout << "拷贝构造函数" << endl;
		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;
		this->paddress = new t[this->m_capacity];
		for (int i = 0; i < this->m_size; i++)
		{
			this->paddress[i] = arr.paddress[i];
		}
	}
	myarray& operator=(const myarray& arr)
	{
		cout << "=拷贝构造函数" << endl;
		if (this->paddress != NULL)
		{
			delete[] this->paddress;
			this->m_capacity = 0;
			this->m_size = 0;
		}

		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;
		this->paddress = new t[arr.m_capacity];
		for (int i = 0; i < this->m_size;i++)
		{
			this->paddress[i] = arr.paddress[i];
		}
		return *this;
	}

	t& operator[](int index)
	{
		return this->paddress[index];
	}

	void push_back(const t& val)
	{
		if (this->m_capacity == this->m_size)
		{
			return;
		}
		this->paddress[this->m_size] = val;
		this->m_size++;
	}

	void pop_back()
	{
		if (this->m_size == 0)
		{
			return;
		}
		this->m_size--;
	}

	int getcapacity()
	{
		return this->m_capacity;
	}

	int getsize()
	{
		return this->m_size;
	}



	~myarray()
	{
		if (this->paddress != NULL)
		{
			cout << "析构函数" << endl;
			delete[] this->paddress;
			this->paddress = NULL;
			this->m_capacity = 0;
			this->m_size = 0;
		}
	}

private:
	t* paddress;
	int m_capacity;
	int m_size;
};