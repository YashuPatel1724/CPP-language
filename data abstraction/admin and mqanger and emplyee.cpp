//Q.1 Write a Program to abstract some attributes of class Admin to prevent them to be inherited by its child classes.
//- Class Admin -> Class Manager
//- Class Manager -> Class Employee
//- Class Admin has the following members:
//company_name
//manager_salary
//employee_salary
//total_staff
//total_annual_revenue
//can_terminate
//- use all attributes accessibility in the parent class and child class properly.
//- override a method myAccess() in both child classes to display all parent class members' values accordingly.
#include<iostream>
using namespace std;

class Admin
{
	protected :
		string company_name = "yashu patel";
		int manager_salary= 1000,employee_salary=500,total_staff=50,total_annual_revenue=50000,can_terminate=5;
		public :
			
			void myAcess()
			{ 
				cout << "          by admin!" << endl << endl;
				
				cout << "company name       : "<<company_name << endl;
		
				cout <<"manger slary        : "<< manager_salary << endl;
				
				cout <<"emloyee slary       :" <<employee_salary << endl;
				
				cout <<"total staff         :" <<total_staff << endl;
				
				cout <<"annual revenue      : " << total_annual_revenue <<endl;
				
				cout << "candidate teminate :"<<can_terminate << endl << endl;
			}
			
		
		
};

class Manager : public Admin
{
	public :
	void myAcess()
	{
	
		cout << "          by manger!" << endl << endl;
		
		cout << "company name       : "<<company_name << endl;
		
		cout <<"manger slary        : "<< manager_salary << endl;
		
		cout <<"emloyee slary       :" <<employee_salary << endl;
		
		cout <<"total staff         :" <<total_staff << endl;
		
		cout << "candidate teminate :"<<can_terminate << endl<<endl;
	}
};

class Employee :  public Manager
{
	public :
	void myAcess()
	{
		cout << "           by employee!" << endl << endl;
		cout << "company name : "<< company_name << endl;
		
		cout <<"emloyee slary :" <<employee_salary << endl;
		
		cout <<"total staff   :" <<total_staff << endl << endl ;
	}
	

};

int main()
{
	Admin a1;

	a1.myAcess();
	
	Manager m1;
	m1.myAcess();
	
	Employee e1;
	e1.myAcess();
	
	
	
	
	
	

	
	
	

	return 0;
}
