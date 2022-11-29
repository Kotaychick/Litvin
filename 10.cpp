#include <iostream>
#include <cmath>
using namespace std;

/*void swap(int* a, int* b)
{

	int c = *a;
	*a = *b;
	*b = c;
	
}*/

double urav(double a, double b);

int main()
{
	setlocale(LC_ALL, "rus");

	/*double x = 3.3, y1 = 0, y2 = 0;

	y1 = pow(x, 2) + 2 * x - 3 + ((x + 1) * sqrt(pow(x, 2) - 9));
	y2 = pow(x, 2) - 2 * x - 3 + ((x - 1) * sqrt(pow(x, 2) - 9));
	cout << "Y = " << y1 / y2 << endl;*/
	/*double z1 = 0, z2 = 0, z3 = 0, r1 = 0, r2 = 0, r3 = 0, m = 0, n = 0, c = 1.0, z = 0;
	cout << "Введите число 1: ";
	cin >> m;
	cout << "Введите число 2: ";
	cin >> n;
	
	r1 = (sqrt(m) + sqrt(n));
	r2 = (sqrt(pow(m, 3))) - (sqrt(pow(n, 3)));
	r3 = (c / r2) - 3*sqrt(m*n);
	z1 = pow(r1, 2)+pow(r1, 3);
	z2 = 2 * (m - n);
	
	if (z2 == 0 || r3 == 0)
	{
		cout << "Ошибка: на ноль делить нельзя";
	}
	else
	{
		z3 = (z1 / z2) / r3;
		cout << "Итог уравнения: " << z3 << endl;
	}
	*/
	
	urav(0, 0);
	

	system("pause");
	return 0;
}

double urav(double a, double b)
{
	double z1 = 0;
	double r1 = 0, r2 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;

	cout << "Введите число 1: ";
	cin >> a;
	cout << "Введите число 2: ";
	cin >> b;

	r1 = 4 * pow(a, 2) - pow(b, 2); 
	r2 = r1 / a;
	r3 = 2 * b + a - r2;
	r4 = pow(b, 3) + 2 * a * pow(b, 2) - 3 * pow(a, 2) * b;
	r5 = r3 / r4;
	r6 = pow(a, 3) * b - 2 * pow(a, 2) * pow(b, 2) + a * pow(b, 3);
	r7 = pow(a, 2) - pow(b, 2);
	r8 = r6 / r7;

	if (a == 0 || r4 == 0 || r7 == 0)
	{
		cout << "Ошибка: на ноль делить нельзя" << endl;
		return 0;
	}
	else
	{
		z1 = r5 * r8;
		cout << "Итог уравнения: " << z1 << endl;
	}

	return 0;
}