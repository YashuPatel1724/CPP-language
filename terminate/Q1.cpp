#include<iostream>
using namespace std;

class Check
{
	int age;
	float a,b;
	string pass;
	
	public :
		void AgeCheck()
		{
			cout << "Enter  age : ";
			cin >> age;
			try
			{
				if(age < 18)
				{
					throw 0;	
				}
				else
				{
					cout << endl << "you are eligable";	
				}	
			}
			catch(int age)
			{
				cout << endl << "You Are cant eligable";	
			}	
		}	
		void divi()
		{
		
			cout << "Enter  first value : ";
			cin >> a;
			
			cout << "Enter  Second value : ";
			cin >> b;
			
			try
			{
				if(b == 0)
				{
					throw b;	
				}
				else
				{
					cout << endl << "Division is : " << a/b;
				}	
			}
			catch(float b)
			{
				cout << endl << " Can't divide by " << b;	
			}
			
		}
		void Password()
		{
			int check=0;
			cout << endl << endl << "Password" << endl;
			cout << "Enter the Password : ";
			cin >> pass;
			
			for(int i=0; i<pass.length(); i++)
			{
				if(pass[i] >= 'A' && pass[i] <= 'Z')
				{
					check = 1;
					break;
				}
			}
			
			try
			{
				if(check == 1)
				{
					cout << endl <<  "Password is Valid" << endl;	
				}
				else
				{
					throw pass;	
				}
			}
			catch(string pass)
			{
				cout << endl << pass << " This Password is wrong ";	
			}	
		}
};

int main()
{
	Check c1;
	
	c1.AgeCheck();
	c1.divi();
	c1.Password();

	
	return 0;
}
