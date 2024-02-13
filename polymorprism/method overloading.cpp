#include<iostream>
using namespace std;

class A
{
	protected : 
	int a,b,c,d,e;
};

class B : public A
{
	public :
	void calculate(int a, int b)
	{
		cout << "division is : " << b/a <<endl;
	}
	
	void calculate(int a, int b, int c)
	{
		cout << " subtraction is : " << c-b-a <<endl;
	}
	
	void calculate(int a, int b,int c,int d)
	{
		cout << "multiplication is : " << a*b*c*d <<endl;
	}
	
	void calculate(int a, int b,int c,int d,int e)
	{
		cout << "multiplication is : " << a+b+c+d+e <<endl;
	}
	
};

int main()
{
	B b1;
	b1.calculate(10,20,30);
	
	
	return 0;
	
}
