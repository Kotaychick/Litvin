/*#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int size = 0;
	cout << "ВВедите кол-во: ";
	cin >> size;

	int* arr = new int[size];
	int* arr2 = new int[size] {};
		for (int i = 0; i < size; i++) 
		{
			arr[i] = rand() % 100;
			cout << arr[i] << endl;
		}
		delete[] arr; 
		for (int i = 0; i < size; i++)
		{
			arr2[i] = rand() % 100;
			cout << arr2[i] << endl;
		}
		delete[] arr2;
	
	system("pause");
	return 0;

}*/