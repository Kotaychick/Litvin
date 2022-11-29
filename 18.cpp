/*#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

void zapolnenie(int a[], int size);
void show(int a[], int size);
bool search(int a[], int n, int isk);





int main()
{
	setlocale(LC_ALL, "");
	
	srand(time(0));
	int const size = 5;
	int a = 0;
	int arr[size]{};

	zapolnenie(arr, size);
	show(arr, size);

	

	system("pause");
	return 0;
}

void zapolnenie(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int isk = rand() % 10;
		while(search(a, size, isk)==1)
		{
			isk = rand() % 10;
		}
		a[i] = isk;
	}
}
void show(int a[], int size)
{
	for (int i = 0; i < size; i++)
		cout << a[i] << endl;
}
bool search(int a[], int n, int isk)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == isk)
		{
			return 1;
			break;
		}
	}

	return 0;
}
*/