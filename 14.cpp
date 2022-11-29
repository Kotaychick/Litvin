/*#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;


double mass();

int main()
{
	setlocale(LC_ALL, "rus");

	mass();


	system("pause");
	return 0;
}

double mass()
{
	srand(time(0));
	int gav[40] = {};

	for (int i = 0; i < 40; i++)
	{
		gav[i] = rand() % 100;
		for (int j = 0; j < 40; j++)
		{
			if (gav[i] == gav[j])
			{
				continue;
			}
		}
		cout << gav[i] << endl;
	
	}
	
	return 0;
	
}*/