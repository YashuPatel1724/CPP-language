#include<iostream>
#include<string.h>
using namespace std;
class car{
	public :
	string car_company_name,car_color,car_model;
	int  car_id, car_release_year;

	
	void input()
	{
		cout << "enter the car id : ";
		cin >> car_id;
		
		
		cout << "enter the car name : ";
		cin >> car_company_name;
		
		
		cout << "enter the car color : ";
		cin >> car_color;
		
		
		cout << "enter the car model : ";
		cin >> car_model;
		
		
		cout << "enter the car release year : ";
		cin >> car_release_year;
		
		
	}
	void print()
	{
		
		cout << "car id : " << car_id << endl;
		
		cout << "car name : " << car_company_name << endl;
		
		cout << "car age : " << car_color << endl;
		
		cout <<  "car model : " << car_model << endl;
		
		cout << "carrelease year : " << car_release_year << endl << endl;
	}
};
int main()
{
	car c[5];
	int i;
	for(i=0; i<5; i++)
	{
		cout << "employe no is " << i+1 << endl << endl;
		
		c[i].input();
		
		cout << "employe no is " << i+1 << endl << endl;
		
		c[i].print();
	}
	return 0;
}
