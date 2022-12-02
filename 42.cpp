#include <iostream>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	
	int a[3]{};
	cout << begin(a) << "\t" << end(a);


	vector <int> v1{10, 20, 30};
	auto begin = v1.begin();
	while (begin != v1.end()) { *begin = *begin * 2; cout << *begin << "\t"; ++begin; }

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