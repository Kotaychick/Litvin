//#include <iostream>
//#include <cmath>
//#include <ctime>
//
//#define DEBUG
//
//enum {first = 1, second, third};
//
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "");
//
//	cout << second << endl;
//
//	int a = 7;
//	(a < 10) ? cout << "<10" : cout << ">= 10";
//	cout << endl;
//
//
//		#ifdef DEBUG
//			cout << 3.14 << endl;
//		#endif
//	
//	int rows = 0;
//	int cols = 0;
//	cout << "ВВедите количество строк: ";
//	cin >> rows;
//	cout << "ВВедите количество столбцов: ";
//	cin >> cols;
//
//	int** arr = new int* [rows];
//	for (int i = 0; i < rows; i++)
//	{
//			arr[i] = new int[cols];
//			for (int j = 0; j < cols; j++)
//			{
//				arr[i][j] = rand() % 10;
//				cout << arr[i][j] << "\t";
//			}
//			cout << endl;
//	}
//	
//	for (int i = 0; i < rows; i++)
//	{
//		delete[] arr[i];
//	}
//	delete[] arr;
//
//
//	system("pause");
//	return 0;
//
//}