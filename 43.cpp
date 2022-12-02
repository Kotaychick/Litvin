#include <iostream>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	vector<int> v1{ 10, 20, 30 };
	cout << v1.size() << endl;
	v1.push_back(40);
	
	v1.emplace(v1.begin(), 100);
	v1.insert(v1.begin(),10, 100);
	v1.insert(v1.end(), { 100, 200, 300, 400 });

	for(auto n : v1)
	{
		cout << n << "\t";
	}

	v1.erase(v1.begin() + 2, v1.end());
	cout << v1.empty() << endl;
	v1.resize(4);
	v1.assign(4, 123);

	for (auto n : v1)
	{
		cout << n << "\t";
	}


	return 0;
}