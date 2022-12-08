#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cmath>
#include <vector>
#include <exception>
#include <stdexcept>

using namespace std;

class Test
{
private:
	vector<int> v1;
	int n;
public:
	Test()
	{
		this->n = (rand() % 29 + 1) + 20;
		
		for (int i = 0; i < n; ++i)
		{
			this->v1.push_back(rand() % 100 + 1);
		}
		
	}
	void Show()
	{
		for (auto n1 : v1)
		{
			cout << n1 << "\t";
		}
	}
	void Info(int r)
	{
		cout << endl << "Size: " << v1.size() << endl;
		cout << "Avg: " << Avg() << endl;
		cout << "Min: " << min() << endl;
		cout << "Max: " << max() << endl;
		cout << "Capacity: " << v1.capacity() << endl;
		Tmp(r);
		//cout << "Capacity: " << v1.capacity() << endl;
	}
	double Avg()
	{
		double s = 0;
		for (int i = 0; i < n; ++i)
		{
			s += v1[i];
		}
		return s / n;
	}
	int min()
	{
		int m = 99999;
		for (int i = 0; i < n; ++i)
		{
			if (m > v1[i])
			{
				m = v1[i];
			}
		}
		return m;
	}
	int max()
	{
		int m = 0;
		for (int i = 0; i < n; ++i)
		{
			if (m < v1[i])
			{
				m = v1[i];
			}
		}
		return m;
	}
	void Tmp(int r)
	{
		try
		{
			int b = v1.at(r);
			cout << "DEL - " << b << endl;
			v1.erase(v1.begin() + r);
		}
		catch (...)
		{
			cout << "Net takogo!!!" << endl;
		}
	}
	bool Search(int r1)
	{
		for (int i = 0; i < n; ++i)
		{
			if (r1 == v1[i])
			{
				return 1; break;
			}
		}
		return 0;
	}
	void Odd()
	{
		for (int i = 0; i < n; ++i)
		{
			if (v1.at(i) % 2 == 0)
			{
				v1.at(i) = 0;
			}
		}
	}
};

int main()
{
	setlocale(LC_ALL, "");
	srand(time(0));
	int r = 100, r1;
	
	Test t;
	//cin >> r;
	cout << "�������:";
	cin >> r1;
	t.Show();
	t.Info(r);
	cout << t.Search(r1) << endl;
	t.Odd();
	t.Show();


	return 0;
}