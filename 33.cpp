/*#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cmath>
#include <math.h>
#include <algorithm>

using namespace std;

class Figure
{
	virtual double Square() = 0;
	virtual double Perimetr() = 0;
	virtual void Show() = 0;
};

class Rectangle : public Figure
{
private:
	int width;
	int height;
public:
	Rectangle()
	{
		height = 10;
		width = 10;
	}
	Rectangle(int h, int w)
	{
		width = 0; height = 0;
		if (h > 0 && w > 0)
		{
			this->height = h;
			this->width = w;
		}
	}
	double Square() override
	{
		return height * width;
	}
	double Perimetr() override
	{
		return (height + width) * 2;
	}
	void Show() override
	{
		if (height == 0 && width == 0)
		{
			cout << "ERROR" << endl;
		}
		else
		{
			cout << "Figura so storonami:\t" << height << "\t" << width << endl;
		}
	}
};

class Circle :Figure
{
private:
	double Pi;
	int radio;
public:
	Circle()
	{
		
		radio = 10;
	}
	Circle(int r)
	{
		radio = 0;
		if (r > 0)
		{
			this->Pi = 3.1415926535;
			this->radio = r;
		}
	}
	double Square() override
	{
		return pow(Pi * radio, 2);
	}
	double Perimetr() override
	{
		return 2 * Pi * radio;
	}
	void Show() override
	{
		if (radio > 0)
		{
			cout << "ERROR" << endl;
		}
		else
		{
			cout << "Figura c radiusom:\t" << radio << endl;
		}
	}
};

class Triangle :Figure
{
private:
	int osnov;
	int	katet1;
	int katet2;
	double height;
	int a, b, c;
public:
	int max(int a1, int b1, int c1) 
	{
		int m = 0;
		if (a1 > b1)
		{
			m = b1;
		}
		else
		{
			m = a1;
		}
		if (m > c1)
		{
			m = c1;
			
		}
		return m;
	}
	int min(int a1, int b1, int c1)
	{
		int m = 0;
		if (a1 < b1)
		{
			m = b1;
		}
		else
		{
			m = a1;
		}
		if (m < c1)
		{
			m = c1;
		}
		return m;
	}
	Triangle()
	{
		osnov = 1;
		height = 0.866;
		katet1 = 1;
		katet2 = 1;
		this->c = max(osnov, katet1, katet2); // gipot
		this->b = min(osnov, katet1, katet2); // katet1
		this->a = (osnov + katet1 + katet2) - c - b; // katet2
	}
	Triangle(int a1, int b1, int c1, double h)
	{
		this->osnov = 0;
		this->katet1 = 0;
		this->katet2 = 0;
		this->height = 0;

		if (a1 > 0 && b1 > 0 && c1 > 0 && h != 0)
		{
			this->osnov = a1;
			this->katet1 = b1;
			this->katet2 = c1;
			this->height = h;
		}
		this->b = max(osnov, katet1, katet2); // gipot
		this->c = min(osnov, katet1, katet2); // katet1
		this->a = (osnov + katet1 + katet2) - c - b; // katet2
	}
	double Perimetr() override
	{
		return osnov + katet1 + katet2;
	}
	double Square() override
	{
		return 0.5 * osnov * height;
	}
	void Show() override
	{
		cout << endl;
		if (a == b && a == c) // а = b = c
		{
			cout << "Ravnostoronniy" << endl;
		}
		else
		{
			if (a == b && c != a) // а = b
			{
				cout << "Triangle ravnobedreniy" << endl;
			}
			else
			{
				if (pow(c, 2) == (pow(a, 2) + pow(b, 2))) // с2 = a2 + b2
				{
					cout << "Triangle pryamoug" << endl;
				}
				else
				{
					cout << "ERROR" << endl;
				}
			}
		}
		cout << endl;

		if (osnov == 0 && katet1 == 0 && katet2 == 0 && height == 0)
		{
			cout << "ERROR" << endl;
		}
		else
		{
			if (osnov < (katet1 + katet2) && katet1 < (osnov + katet2) && katet2 < (osnov + katet1))
			{
				cout << "Figura so storonami:\t" << "\tosnovanie\t" << osnov << "\tkatet1\t" << katet1 << "\tkatet2\t" << katet2 << "\theight\t" << height << endl;
			}
			else
			{
				cout << "ERROR" << endl;
			}
		}
	}
};
//
int main()
{
	setlocale(LC_ALL, "");

	cout << "KVADRAT\n" << endl;

	Rectangle r1(-120, 10);
	cout << "Perimetr: " << r1.Perimetr();
	cout << endl;
	cout << "Ploshad: " << r1.Square();
	cout << endl;
	r1.Show();
	Rectangle r2;
	cout << "Perimetr: " << r2.Perimetr();
	cout << endl;
	cout << "Ploshad: " << r2.Square();
	cout << endl;
	r2.Show();
	Rectangle r3(12, 15);
	cout << "Perimetr: " << r3.Perimetr();
	cout << endl;
	cout << "Ploshad: " << r3.Square();
	cout << endl;
	r3.Show();

	cout << "\nKRUG\n" << endl;

	Circle c1;
	c1.Show();
	cout << "Perimetr: " << c1.Perimetr();
	cout << endl;
	cout << "Ploshad: " << c1.Square();
	cout << endl;
	Circle c2(15);
	c2.Show();
	cout << "Perimetr: " << c2.Perimetr();
	cout << endl;
	cout << "Ploshad: " << c2.Square();
	cout << endl;
	Circle c3(-15);
	c3.Show();
	cout << "Perimetr: " << c3.Perimetr();
	cout << endl;
	cout << "Ploshad: " << c3.Square();
	cout << endl;

	cout << "\nTREUGOL\n" << endl;

	Triangle T;
	T.Show();
	cout << "Perimetr: " << T.Perimetr();
	cout << endl;
	cout << "Ploshad: " << T.Square();
	cout << endl;
	Triangle T2(3, 4, 5, 0.866);
	T2.Show();
	cout << "Perimetr: " << T2.Perimetr();
	cout << endl;
	cout << "Ploshad: " << T2.Square();
	cout << endl;
	/*Triangle T3(-15, -14, -16, -0.866);
	T3.Show();
	cout << "Perimetr: " << T3.Perimetr();
	cout << endl;
	cout << "Ploshad: " << T3.Square();
	cout << endl;
	Triangle T4(25, 3, 3, 0.866);
	T4.Show();
	cout << "Perimetr: " << T4.Perimetr();
	cout << endl;
	cout << "Ploshad: " << T4.Square();
	cout << endl;*//*


	return 0;
}*/