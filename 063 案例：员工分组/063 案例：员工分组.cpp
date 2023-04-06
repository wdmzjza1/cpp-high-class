#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<ctime>

#define cehua 0
#define meishu 1
#define yanfa 2

class worker
{
public:
	string m_name;
	int m_salary;
};

void createworker(vector<worker>& v)
{
	string nameseed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		worker wk;
		wk.m_name = "员工";
		wk.m_name += nameseed[i];

		wk.m_salary = rand() % 10000 + 10000;
		v.push_back(wk);
	}

	
}

void setgroup(vector<worker>& v, multimap<int, worker>& m)
{
	for (vector<worker>::iterator it=v.begin();it!=v.end();it++)
	{
		int deptid = rand() % 3;

		m.insert(make_pair(deptid, *it));
	}
}

void showworkerbygroup(multimap<int, worker>& m)
{
	cout << "策划部门：" << endl;

	multimap<int, worker>::iterator pos = m.find(cehua);
	int count = m.count(cehua);
	int index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_name << "工资：" << pos->second.m_salary << endl;
	}

	cout << "-------------------" << endl;
	cout << "美术部门:" << endl;
	pos = m.find(meishu);
	count = m.count(meishu);
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_name << "工资：" << pos->second.m_salary << endl;
	}
	cout << "-------------------" << endl;
	cout << "研发部门:" << endl;
	pos = m.find(yanfa);
	count = m.count(yanfa);
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_name << "工资：" << pos->second.m_salary << endl;
	}
}

int main()
{

	srand((unsigned int)time(NULL));

	vector<worker>vworker;
	createworker(vworker);

	multimap<int, worker>mworker;
	setgroup(vworker, mworker);

	showworkerbygroup(mworker);

	//for (vector<worker>::iterator it = vworker.begin(); it != vworker.end(); it++)
	//{
	//	cout << it->m_name << it->m_salary << endl;
	//}
}