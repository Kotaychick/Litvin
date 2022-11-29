/*#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

void tt(int nums[], int n);

int main()
{
	
	tt(0, 0);
	
	system("pause");
	return 0;
}

void tt(int nums[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < 10; i++)
		{
			srand(time(0));
			nums[i] = rand() % 10;
			for (int j = 0; j < 10; j++)
			{
				if (nums[i] == nums[j])
				{
					continue;
				}
			}
			cout << nums[i] << endl;
		}
	}
}*/