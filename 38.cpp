#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>

using namespace std;

class Tmp
{
private:
	int age;
	static int l;
public:
	Tmp()
	{
		age = 3;
	}
	static void SetStatic(int a)
	{
		l = a;
	}
};

int Tmp::l = 10;

double division(int a, int b)
{
	if (b == 0)
	{
		throw out_of_range("Div = 0");
	}
	return a / b;
}

int main()
{
	setlocale(LC_ALL, "");

	/*try
	{
		cout << division(10, 0) << endl;
	}
	catch (out_of_range err)
	{
		cout << err.what();
	}
	catch (exception err)
	{
		cout << err.what() << "!!!";
	}*/

	Tmp a;
	Tmp b;
	b.SetStatic(100);

	

	return 0;
}