#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	
		
	int cafe_id,cafe_rating, cafe_establish_year,cafe_staff_quantity;
	string line,cafe_name, cafe_type, cafe_city;
	
	
	public :
		Student()
		{
			cout << "titenic cafe";
		}
	void setter()
	{
		cout << "Enter the cafe id : ";
		cin >> cafe_id;
		
		cin.ignore();
		cout << "Enter the cafe name : ";
		getline(cin,cafe_name);
		
		cout << "Enter the cafe type : ";
		getline(cin,cafe_type);
		
		
		cout << "Enter the cafe_rating : ";
		cin >>   cafe_rating;
		cin.ignore();
		
		cout << "Enter the  cafe city : ";
		getline(cin,cafe_city);
		
		cout << "Enter the  cafe_establish_year: ";
		cin >>  cafe_establish_year;
	
		cout << "Enter the cafe_staff_quantity : ";
		cin >> cafe_staff_quantity;	
	}	
	
	void getter()
	{
		cout << "cafe_id: " << cafe_id << endl;
		
		cout << "cafe_name : " << cafe_name << endl;
		
		cout << "cafe_type : " << cafe_type << endl;
		
		cout << "cafe_rating : " << cafe_rating << endl;
		
		cout << "cafe_city : " <<  cafe_city << endl;
		
		cout << "cafe_establish_year: " << cafe_establish_year << endl;
		
		cout << "cafe_staff_quantity : " << cafe_staff_quantity << endl;
		
	}
};
int main()
{
	Student s1;
	
	int i;
	
	
	
		cout << endl;
		cout << "cafe Information "<< endl<<endl;
		s1.setter();
		cout << endl;
		cout << "cafe Information " << endl<<endl;
		s1.getter();
		
	
	return 0;
}
