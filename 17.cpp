/*#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;



void zapolnenie(double a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 10;
	}
}
void show(double a[], int n)
{
	for(int i=0; i<n; i++)
		cout << a[i] << endl;
}
void zapolnenie_uk(double *b, double *e)
{
	for (double * i = b; i < e; i++)
	{
		*(i) = rand() % 10;
	}
}
void show_uk(double *b, double *e)
{
	for (double * i = b; i < e; i++)
		cout << *(i) << endl;
}

int main()
{
	setlocale(LC_ALL, "");

	double a[5]{};
	double b[5]{};

	zapolnenie(a, 5);
	show(a, 5);

	zapolnenie_uk(b, end(b));
	show_uk(b, end(b));

	system("pause");
	return 0;
} */