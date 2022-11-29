//#include <iostream>
//#include <string>
//#include <fstream>
//#include <ctime>
//#include <cmath>
//
//using namespace std;
//
//class Person
//{
//	protected:
//		string name;
//		int age;
//	public:
//		Person(int age, string name)
//		{
//			this->age = age;
//			this->name = name;
//		}
//
//		virtual void Show()
//		{
//			cout << "name\t" << name << "\tage\t" << age;
//		}
//};
//
//class Employee : public Person
//{
//	private:
//		string company;
//
//	public:
//		Employee(int age, string name, string company) : Person(age, name)
//		{
//			this->company = company;
//		}
//		void Show() override
//		{
//			//Person::Show();
//			cout << "name\t" << name << "\tage\t" << age << "\tcompany\t" << company << endl;
//		}
//};
//
//int main()
//{
//	setlocale(LC_ALL, "");
//
//	Employee e(10, "VASA", "Com");
//	
//	e.Show();
//
//	system("pause");
//	return 0;
//}