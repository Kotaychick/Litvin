/*#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cmath>

using namespace std;

class Tmp
{
protected:
	int a;
public:
	Tmp()
	{
		this->a = 10;
	}
	Tmp(int a)
	{
		this->a = a;
	}
	void setA(int a)
	{
		this->a = a;
	}
	int getA()
	{
		return a;
	}
	virtual void Show()
	{
		cout << a << endl;
	}
};
class T :public Tmp
{
private:
	int b;
public:
	T()
	{
		this->b = 5;
	}
	T(int b)
	{
		this->b = b;
	}
	void Show() override
	{
		cout << a << "\t" << b << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "");

	T t;
	t.Show();
	t.setA(25);
	t.Show();

	system("pause");
	return 0;
}*/