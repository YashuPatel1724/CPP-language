#include<iostream>
using namespace std;
//Q.3 Write a Program to read and print Employee information with the use of Multilevel inheritance. (as same the attached image)

class A
{
	protected : 
	int id,sal,exp;
	double contact;
	string name,role,comp_name,add,emil;
	
	public : 
	void set()
	{
		cout << "entre the id: ";
		cin >> id;
		cin.ignore();
		
		cout << "entre the name: ";
		getline(cin,name);
		
		cout << "entre the role: ";
		getline(cin,role);
	}
	
};

class B : public A
{
	protected : 
	int sal,exp;
	public :

	void set()
	{
		A::set();
		cout << "entre the salary: ";
		cin >> sal;
		
		cout << "entre the exp: ";
		cin >> exp;
	}
};

class C : public B
{
		protected : 
	string comp_name,add;
	public :

	void set()
	{
		cin.ignore();
		cout << "entre the company name: ";
		getline(cin,comp_name);
		
		cout << "entre the address: ";
		getline(cin,add);
	}
	
	void get()
	{
		cout << "name is " << name << endl;
		
		cout << "role is : " << role <<endl;
		
		cout << "salary is : " << sal <<endl;
	}
};

class D : public C
{
	protected :
		double contact;
		string email;
		public : 
		void set()
		{
			cout << "entre the email: ";
			getline(cin,email);
			
			cout << "entre the contact: ";
			cin >> contact;
		}
		
		void get()
		{
			cout << "id is  : " << id << endl;
			
			cout << "name is " << name << endl;
		
			cout << "role is : " << role <<endl;
		
			cout << "salary is : " << sal <<endl;
			
			cout << "exp is " << exp << endl;
		
			cout << "com name is : " << comp_name <<endl;
		
			cout << "address is : " << add <<endl;
			
			cout << "email is : " << email <<endl;
			
			cout << "contact is : " << contact <<endl;
		}
};

int main()
{
	B b1;
	b1.set();
	
	C c1;
	c1.set();
	c1.get();
	
	D d1;
	d1.set();
	d1.get();
	
	return 0;
}
