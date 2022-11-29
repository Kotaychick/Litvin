#include <iostream>
#include <cmath>
#include <ctime>
#include <Windows.h>
#include <fstream>
#include <string>

using namespace std;

class Mass
{
	private:
		int *arr;
		int temp;
	public:
		
		Mass(int n)
		{
			srand(time(0)); 
			arr = new int[n];
			for (int i = 0; i < n; i++)
				arr[i] = rand() % 20;
		}

		~Mass()
		{
			delete[] arr;
		}

		int kol()
		{
			return _msize(arr) / sizeof(int);
		}

		void show()
		{
			for (int i = 0; i < kol(); i++)
				cout << arr[i] << "\t";
		}

		void sortUp()
		{
			for (int i = 0; i < kol() ; i++)
			{
				for (int j = 0; j < kol() - 1; j++)
				{
					if (arr[i] < arr[j])
					{
						swap(arr[i], arr[j]);
					}

				}
			}
		}

		void sortDown()
		{
			for (int i = 0; i < kol(); i++)
			{
				for (int j = 0; j < kol() - 1; j++)
				{
					if (arr[i] > arr[j])
					{
						swap(arr[i], arr[j]);
					}

				}
			}
		}

		void Max()
		{
			int max = 0;
			
				for (int j = 0; j < kol() - 1; j++)
				{
					if (arr[j] > max)
					{
						max = arr[j];
					}
				}
			cout << "Max: " << max << endl;
		}

		void Min()
		{
			{
				int min;

				for (int j = 0; j < kol(); j++)
				{
					if (arr[j] > arr[j+1])
					{
						min = arr[j];
					}
				}
				cout << "Min: " << min << endl;
			}
		}

		double Avg()
		{
			double d = 0;
			for (int i = 0; i < kol(); i++)
			{
				d += arr[i];
			}
			return (double) d / kol();
		}
};

int main()
{
	setlocale(LC_ALL, "");
	
	int n = 0;
	cout << "Колич элементов в массиве: ";
	cin >> n;
	
	Mass M(n);
	M.show();
	M.sortUp();
	cout << "\nПо возрастанию: ";
	M.show();
	cout << endl;
	cout << "По убыванию: ";
	M.sortDown();
	M.show();
	cout << endl;
	M.Max();
	M.Min();
	cout << M.Avg() << endl;

	system("pause");
	return 0;
}