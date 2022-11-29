//#include <iostream>
//#include <cmath>
//#include <ctime>
//#include <Windows.h>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//void sformirovat(string path, int n);
//int kolvo(string path);
//void schit(string path, int ar[]);
//
//int main()
//{
//	srand(time(0));
//	setlocale(LC_ALL, "");
//	ofstream out;
//
//	//out.open("C:\\C\\hello.txt"); //ios_base::app);
//
//	//if (out.is_open())
//	//{
//	//	for (int i = 0; i < 10; i++)
//	//	{
//	//		out << rand() % 100 << endl;
//	//	}
//	//}
//	//out.close();
//
//	//ifstream in;
//	//string s;
//	//in.open("C:\\C\\hello.txt");
//	//if (in.is_open())
//	//{
//	//	while (getline(in, s))
//	//	{
//	//		cout << s << endl;
//	//	}
//	//}
//	//else
//	//{
//	//	cout << "Error!!";
//	//}
//	//in.close();
//	int n = 0;
//	string path = "C:\\C\\hello.txt";
//
//	cout << "Введите количество элементов: ";
//	cin >> n;
//	
//	sformirovat(path, n);
//
//	//cout << kolvo(path) << endl;
//	
//	int kol = kolvo(path);
//	int* ar = new int[kol];
//	
//	schit(path, ar);
//	
//	for (int i = 0; i < kol; i++)
//	{
//		cout << ar[i] << endl;
//	}
//
//	int temp;
//
//	for (int i = 0; i < n - 1; i++) {
//		for (int j = 0; j < n - i - 1; j++) {
//			if (ar[j] > ar[j + 1]) {
//				
//				temp = ar[j];
//				ar[j] = ar[j + 1];
//				ar[j + 1] = temp;
//			}
//		}
//	}
//	cout << "Отсортированный массив: ";
//	for (int i = 0; i < n; i++) {
//		
//		cout << ar[i] << " ";
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}
//
//void sformirovat(string path, int n)
//{
//	
//	ofstream out;
//	out.open(path); //ios_base::app);
//
//	if (out.is_open())
//	{
//		srand(time(0));
//		for (int i = 0; i < n; i++)
//		{
//			out << rand() % 100 << endl;
//		}
//	}
//	out.close();
//}
//
//int kolvo(string path)
//{
//	int kol = 0;
//	ifstream in;
//	string s;
//	in.open(path);
//	
//	if (in.is_open())
//	{
//		while (getline(in, s))
//		{
//			kol++;
//		}
//	}
//	in.close();
//	return kol;
//}
//
//void schit(string path, int ar[])
//{
//	ifstream in;
//	string s;
//	int i = 0;
//	in.open(path);
//
//	if (in.is_open())
//	{
//		while(getline(in, s))
//		{
//			ar[i] = stoi(s);
//			i++;
//		}
//	}
//	in.close();
//}