/*#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cmath>

using namespace std;

class koord
{
private:
	int x;
	int y;
public:
	koord(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	~koord()
	{

	}
	koord()
	{
		this->x = x;
		this->y = y;
	}
	void setkoord(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	bool operator == (koord k1) 
	{
		return this->x == k1.x && this->y == k1.y;
		//return true;
	}
	bool operator != (koord k1)
	{
		return !(this->x == k1.x && this->y == k1.y);
		//return true;
	}
	bool operator > (koord k1)
	{
		return this->x > k1.x && this->y > k1.y;
		//return true;
	}
	bool operator < (koord k1)
	{
		return this->x < k1.x && this->y < k1.y;
		//return true;
	}
};

int main()
{
	koord c1();

	koord c2(9, 9);
	koord c3(10, 10);
	
	if (c2 == c3)
	{
		cout << "=" << endl;
	}
	else
	{
		cout << "!=" << endl;
	}

	if (c2 != c3)
	{
		cout << "!=" << endl;
	}
	else
	{
		cout << "=" << endl;
	}

	if (c2 > c3)
	{
		cout << ">" << endl;
	}
	else
	{
		if (c2 == c3)
		{
			cout << "=" << endl;
		}
		else
		{
			cout << "<" << endl;
		}
	}

	if (c2 < c3)
	{
		cout << "<" << endl;
	}
	else
	{
		if (c2 == c3)
		{
			cout << "=" << endl;
		}
		else
		{
			cout << ">" << endl;
		}
	}
	system("pause");
	return 0;
}*/