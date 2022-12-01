#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cmath>

using namespace std;

struct N
{
	string predmet;
	int ocenka;
};

class Students
{
private:
	string fio;
	int group;
	int age;
	N m[5];

public:
	Students()
	{
		srand(time(0));
		
		fio = "Ivan Ivanov Ivanovich";
		group = 641;
		age = 19;
		for (int i = 1; i < 6; ++i)
		{
			m[i - 1].predmet = "Predmet: " + to_string(i);
			m[i - 1].ocenka = rand() % 4 + 2;
		}

	}
	Students(string a, int b, int c, int *d)
	{
		this->fio = a;
		this->group = b;
		this->age = c;
		for (int i = 1; i < 6; ++i)
		{
			this->m[i -1].predmet = "Predmet: " + to_string(i);
			this->m[i - 1].ocenka = d[i - 1];
		}
		delete[] d;
	}
	
	/*Students(const Students& ref)
	{
		int size = 5;
		for (int i = 0; i < size; ++i)
		{
			m[i] = ref.m[i];
		}
	}*/
	void Show()
	{
		cout << fio << "\t" << group << "\t" << age << endl;
		for (int i = 0; i < 5; ++i)
		{
			cout << m[i].predmet << "-" << m[i].ocenka << endl;
		}
	}
	double Avg()
	{
		double s = 0;
		for (int i = 0; i < 5; ++i)
		{
			s += m[i].ocenka;
		}
		return s / 5;
	}
	void SetStudents(string a, int b, int c, int* d)
	{
		this->fio = a;
		this->group = b;
		this->age = c;
		for (int i = 1; i < 6; ++i)
		{
			this->m[i - 1].predmet = "Predmet: " + to_string(i);
			this->m[i - 1].ocenka = d[i - 1];
		}
	}
	void GetStudents(string a, int b, int c, int* d)
	{
		this->fio = a;
		this->group = b;
		this->age = c;
		for (int i = 1; i < 6; ++i)
		{
			this->m[i - 1].predmet = d[i - 1];
			this->m[i - 1].ocenka = d[i - 1];
		}
	}
	bool operator >(Students S)
	{
		if (Avg() > S.Avg())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool operator < (Students S)
	{
		if (Avg() < S.Avg())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool operator ==(Students S)
	{
		return this->Avg() == S.Avg();
	}
	bool operator !=(Students S)
	{
		return !(this->Avg() == S.Avg());
	}

};

int main()
{
	setlocale(LC_ALL, "");
	srand(time(0));

	int *arr;	
	arr = new int[5];
	/*for (int i = 1; i<6; ++i)
	{
		cout << "Введите оценку для предмета No" + to_string(i) << endl;
		cin >> arr[i - 1];
		Students S1("Kotov Anton Alekseevich", 641, 19, arr);
		if (arr[4] > 0)
		{
			S1.Show();
			cout << S1.Avg() << endl;
		}
	}*/

	for (int i = 1; i < 6; ++i)
	{
		cout << "Введите оценку для предмета No" + to_string(i) << endl;
		cin >> arr[i - 1];
		Students S1;
		S1.SetStudents("Kotov Anton Alekseevich", 641, 19, arr);
		if (arr[4] > 0)
		{
			S1.Show();
			cout << S1.Avg() << endl;
			Students S;
			S.Show();
			cout << "1 - " << S1.Avg() << "\t" << "2 - " << S.Avg() << endl;
			cout << "Ravenstvo == " << (S1 == S);
			
		}
	}
	 

	//Students S("Kotov Anton Alekseevich", 641, 19, arr);
	//S.Show();
	//cout << endl;
	//Students b = S;
	//b.Show();

	/*Students S;
	S.Show();*/
	

	delete[] arr;
	return 0;
}