#include <iostream>

using namespace std;

class CC
{
private:
	int* a;
public:
	CC()
	{
		a = new int[10]{};
		for (auto i = 0; i < 10; ++i)
		{
			cout << a[i] << endl;
		}

	}
	~CC()
	{
		delete[] a;
	}
};

int main()
{
	setlocale(LC_ALL, "");

	CC cl;
	CC d = cl;

	return 0;
}