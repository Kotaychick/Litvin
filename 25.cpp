//#include <iostream>
//#include <cmath>
//#include <ctime>
//#include <Windows.h>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//class Person
//{
//	private: //Для защиты
//		
//		string Name;
//		int age;
//
//	public:
//	
//		Person(string s, int a)
//		{
//			Name = s;
//			age = a;
//		}
//
//		Person(string s)
//		{
//			Name = s;
//			age = 15;
//		}
//
//		~Person()
//		{
//			cout << "Destructor" << endl;
//		}
//
//	/*	void setName(string n)
//		{
//			Name = n;
//		}
//
//		void setage(int n)
//		{
//			age = n;
//		}
//
//		string getName()
//		{
//			return Name;
//		}
//
//		int getage()
//		{
//			return age;
//		}*/
//
//		void show()
//		{
//			cout << Name << "\t" << age << endl;
//		}
//
//};
//
//int main()
//{
//	Person P("Tom", 15);
//
//	/*P.setName("Tom");
//	P.setage(21);
//
//	cout << P.getName() << "\t" << P.getage() << endl;*/
//
//	P.show();
//	Person * pp = new Person("Destructor");
//	delete pp;
//	system("pause");
//	return 0;
//}