#include<iostream>
using namespace std;

class A
{
	protected :
	int a;
	
	public : 
	void set()
	{
		cout << "entre the value of a : ";
		cin >> a;
	}
};

class B  
{
	protected :
	int b;
	
	public : 
	void set()
	{
		cout << "entre the value of b : ";
		cin >> b;
	}
	

};

class C : public A,public B
{
	protected :
	int c;
	
	public : 
	void set()
	{
	    A::set();
		B::set();
		cout << "entre the value of c : ";
		cin >> c;
	}
	
	void get()
	{
		cout << a << " " << b << " "<< c << endl;
	}
};

int main()
{

	
	C c1;
	c1.set();
	c1.get();
	return 0;
}
