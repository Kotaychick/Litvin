//#include <iostream>
//
//using namespace std;
//
//class Date
//{
//private:
//		int day;
//		int month;
//		int year;
//
//public:
//	
//	Date(int d, int m, int y)
//	{
//		this-> day = d;
//		this-> month = m;
//		this-> year = y;
//	}
//
//	Date()
//	{
//		day = 01;
//		month = 01;
//		year = 2000;
//	}
//
//	void Show()
//	{
//		cout << day << "." << month << "." << year << endl;
//	}
//
//	bool operator == (Date D)
//	{
//		if (this->year == D.year)
//		{
//			if (this->month == D.month)
//			{
//				if (this->day == D.day)
//				{
//					cout << "==" << endl;
//				}
//				else
//				{
//					cout << "!=" << endl;
//				}
//			}
//			else
//			{
//				cout << "!=" << endl;
//			}
//		}
//		else
//		{
//			cout << "!=" << endl;
//		}
//	}
//	
//	bool operator != (Date D)
//	{
//		if (this->year != D.year)
//		{
//			if (this->month == D.month)
//			{
//				if (this->day == D.day)
//				{
//					cout << "==" << endl;
//				}
//				else
//				{
//					cout << "!=" << endl;
//				}
//			}
//			else
//			{
//				cout << "!=" << endl;
//			}
//		}
//		else
//		{
//			cout << "!=" << endl;
//		}
//	}
//
//	bool operator > (Date D)
//	{
//		if (this->year > D.year)
//		{
//			cout << ">" << endl;
//		}
//		else
//		{
//			if (this->month > D.month)
//			{
//				cout << ">" << endl;
//			}
//			else
//			{
//				if (this->day > D.day)
//				{
//					cout << ">" << endl;
//				}
//				else
//				{
//					cout << "<" << endl;
//				}
//			}
//		}
//	}
//
//
//
//};
//
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	
//	Date s(10, 20, 2000);
//	s.Show();
//	Date s1;
//	s1.Show();
//	
//	return 0;
//}