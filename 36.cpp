#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cmath>

using namespace std;

class Dates
{
private:
	int day;
	int month;
	int year;
public:
	Dates()
	{
		this->day = 11;
		this->month = 3;
		this->year = 2003;
	}
	Dates(int d, int m, int y)
	{
		day = 0;
		month = 0;
		year = 0;

		if (d > 0 && m > 0 && y > 0)
		{
			this->day = d;
			this->month = m;
			this->year = y;
		}
	}
	void Show()
	{
		cout << day << "." << month << "." << year << endl;
	}
	bool operator ==(Dates D)
	{
		if (this->year == D.year)
		{
			if (this->month == D.month)
			{
				if (this->day == D.day)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	bool operator !=(Dates D)
	{
		if (this->year != D.year)
		{
			return true;
		}
		else
		{
			if (this->month != D.month)
			{
				return true;
			}
			else
			{
				if (this->day != D.day)
				{
					return true;
				}
				else
				{
					return false;
				}
			}

		}
	}
	bool operator >(Dates D)
	{
		if (this->year > D.year)
		{
			return true;
		}
		else
		{
			if (this->month > D.month)
			{
				return true;
			}
			else
			{
				if (this->day > D.day)
				{
					return true;
				}
				else
				{
					return false;//��� �������
				}
			}
		}
	}
	bool operator <(Dates D)
	{
		if (this->year < D.year)
		{
			return true;
		}
		else
		{
			if (this->month < D.month)
			{
				return true;
			}
			else
			{
				if (this->day < D.day)
				{
					return true;
				}
				else
				{
					return false;//��� �������
				}
			}
		}
	}
	Dates& operator ++()
	{
		day++;
		month++;
		year++;
		return *this;
	}
	Dates& operator ++(int d)
	{
		Dates tmp(*this);
		this->day++;
		this->month++;
		this->year++;
		return tmp;
	}

	friend void tmp(Dates& a);
};

int main()
{
	setlocale(LC_ALL, "");

	Dates d(10, 12, 2005);
	d.Show();
	Dates d1;
	d1.Show();
	//++d1;
	//d1.Show();
	//d1++;
	//d1.Show();

	tmp(d1);

	if (d > d1)
	{
		cout << ">" << endl;
	}
	else
	{
		cout << "<" << endl;
	}

	if (d < d1)
	{
		cout << "<" << endl;
	}
	else
	{
		cout << ">" << endl;
	}

	if (d == d1)
	{
		cout << "==" << endl;
	}
	else
	{
		cout << "!=" << endl;
	}

	if (d != d1)
	{
		cout << "!=" << endl;
	}
	else
	{
		cout << "==" << endl;
	}

	return 0;
}