#include <iostream>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	vector <int> v1{10, 20, 30};
	cout << v1.front() << endl;
	cout << v1.back() << endl;
	
	for (auto n : v1)
	{
		cout << n << "\t";
	}

	try
	{
		cout << v1.at(10);
	}
	catch (...)
	{
		cout << "ERROR";
	}
	return 0;
}