//#include <iostream>
//#include <cmath>
//#include <ctime>
//#include <Windows.h>
//
//using namespace std;
//
////struct Coord
////{
////	int x;
////	int y;
////};
//
////struct Person
////{
////	int age;
////	string name;
////};
//
//struct Data
//{
//	int day; int month; int year;
//};
//
//int main()
//{
//	srand(time(0));
//	setlocale(LC_ALL, "rus");
//
//	int j = 0;
//	cout << "Введите кол-во элементов: ";
//	cin >> j;
//
//	Data *ar = new Data[j];
//	for (int i = 0; i < j; i++)
//	{
//		ar[i].day = (rand() % 29) + 1;
//		ar[i].month = (rand() % 11) + 1;
//		ar[i].year = 2022;
//	}
//	for (int i = 0; i < j; i++)
//	{
//		if (ar[i].day > 9)
//			cout << ar[i].day << ".";
//		else
//			cout << "0" << ar[i].day << ".";
//		if(ar[i].month > 9)
//			cout << ar[i].month << "." << ar[i].year << endl;
//		else
//			cout << "0" << ar[i].month << "." << ar[i].year << endl;
//	}
//	delete[] ar;
//
//
//	/*for (int i = 0; i < 3; i++)
//	{
//		cout << "Name ";
//		cin >> ar[i].name;
//		cout << "Age ";
//		cin >> ar[i].age;
//		*/
//	/*}
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << ar[i].name << "\t" << ar[i].age << endl;
//	}*/
//
//	/*Coord ar[3];*/
//
//	/*for (int i = 0; i < 3; i++)
//	{
//		ar[i].x = (rand() % 5) + 5;
//		ar[i].y = (rand() % 3) + 3;
//		cout << ar[i].x << "\t" << ar[i].y << endl;
//	}*/
//
//	/*for (int i = 0; i < 3; i++)
//	{
//		ar[i].x = 0;
//		ar[i].y = 2;
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "x - " << c.x << "\t" << "y - " << c.y << endl;
//	}*/
//
//	system("pause");
//	return 0;
//
//}