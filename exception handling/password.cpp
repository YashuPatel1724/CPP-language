//Q.1 Write a Program to implement exception handling mechanism for different types of scenarios:
//- a number cannot be divided by zero
//- a person cannot be able to vote if his/her age is less than 18
//- a password cannot be validated if it doesn’t contains an uppercase letter
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char password[50];
	int i,check=0;
	
	
		cout <<"Entre the password: ";
		cin >> password;
	
	
	int len =strlen(password);
	
		for(i=0; i<=len; i++)
		{
			if(password[i]>=65 && password[i]<=90)
			{
				check = 1;
			}
	 	}
	 	try
	 	{
	 		if(check!=1)
	 		{
	 			throw password;	
			}
			else
			{
				cout << "saved password!";
			}
		}
		catch(...)
		{
		cout << "does not entre the capital value"<<endl;
		}
	return 0;
}
