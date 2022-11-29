#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cmath>

using namespace std;

class Ar
{
private:
	int* arr;
	int size;
public:
	Ar()
	{
		srand(time(0));
		size = 6;
		arr = new int[6];
		for(int j = 0; j < size; ++j)
		{
			arr[j] = rand() % 20 + 1;
		}
	}

	Ar(const Ar& ref)
	{
		size = ref.size;
		this->arr = new int[ref.size];
		for (int i = 0; i < size; ++i)
		{
			arr[i] = ref.arr[i];
		}
	}

	~Ar()
	{
		delete[] arr;
	}

	void Show()
	{
		for (int i = 0; i < size; ++i)
		{
			cout << arr[i] << endl;
		}
	}
};

int main()
{
	setlocale(LC_ALL, "");

	Ar ar;
	Ar b = ar;
	ar.Show();
	
	/*int* a;
	a = new int[5];*/

	return 0;
}