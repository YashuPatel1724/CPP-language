//Q.1 Write a Program to implement exception handling mechanism for different types of scenarios:
//- a number cannot be divided by zero
//- a person cannot be able to vote if his/her age is less than 18
//- a password cannot be validated if it doesn’t contains an uppercase letter
#include<iostream>
using namespace std;

int main()
{
	int a,b;
	
	cout <<"Entre the value of a: ";
	cin >> a;
	
	cout <<"Entre the value of b: ";
	cin>> b;
	
	try
	{
		if(b==0)
		{
			throw b;
		}
		else
		{
			cout << "Division : " << a/b << endl;
		}

	}
	catch(int x)
	{
		cout << "User can't entre the zero!"<<endl;
	}
	return 0;
}
