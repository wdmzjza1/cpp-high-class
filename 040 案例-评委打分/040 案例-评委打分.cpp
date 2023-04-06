#include<iostream>
using namespace std;
#include<vector>
#include<deque>
#include<algorithm>

class person
{
public:
	person(string name, int score)
	{
		this->m_name = name;
		this->m_score = score;
	}
public:
	string m_name;
	int m_score;
};

void creatperson(vector<person>& v)
{
	string nameseed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += nameseed[i];

		int score = 0;

		person p(name, score);

		v.push_back(p);
	}
}

void setscore(vector<person>& v)
{
	for (vector<person>::iterator it = v.begin(); it != v.end(); it++)
	{
		deque<int> d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;
			d.push_back(score);
		}

		sort(d.begin(), d.end());

		d.pop_front();
		d.pop_back();

		int sum = 0;
		for (deque<int>::iterator dit = d.begin();dit != d.end(); dit++)
		{
			sum += *dit;
		}
		int avg = sum / d.size();
		it->m_score = avg;
	}
}

void showscore(vector<person>& v)
{
	for (vector<person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << it->m_name << "平均分：" << it->m_score << endl;
	}
}

int main()
{
	//srand((unsigned int)time(NULL));

	vector<person>v;
	creatperson(v);


	setscore(v);

	showscore(v);
}