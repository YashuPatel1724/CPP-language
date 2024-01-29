#include<iostream>
#include<string.h>
using namespace std;
class employe{
	public :
	string emp_name,emp_city,emp_role,emp_company_name,line;
	int  emp_id,emp_age,emp_salary,emp_experience;

	
	void input()
	{
		cout << "enter the id : ";
		cin >> emp_id;
		getline(cin,line);
		
		cout << "enter the name : ";
		getline(cin,emp_name);
		
		cout << "enter the age : ";
		cin >> emp_age;
		getline(cin,line);
		
		cout << "enter the role : ";
		getline(cin,emp_role);
		
		cout << "enter the salary : ";
		cin >> emp_salary;
		getline(cin,line);
		
		cout << "enter the city : ";
		getline(cin,emp_city);
		
		cout << "enter the exprince : ";
		cin >> emp_experience;
		getline(cin,line);
		
		cout << "enter the company name : ";
		getline(cin,emp_company_name);
	}
	void print()
	{
		cout << "employe id : " << emp_id << endl;
		
		cout << "employe name : " << emp_name << endl;
		
		cout << "employe age : " << emp_age << endl;
		
		cout <<  "employe role : " << emp_role << endl;
		
		cout << "employe salary : " << emp_salary << endl;
		
		cout << "employe city : " << emp_city << endl;
		
		cout << "employe exprience : " << emp_experience << endl;
		
		cout << "employe company name : " << emp_company_name << endl << endl;
	}
};
int main()
{
	employe e[5];
	int i;
	for(i=0; i<5; i++)
	{
		cout << "employe no is " << i+1 << endl << endl;
		
		e[i].input();
		e[i].print();
	}
	return 0;
}
