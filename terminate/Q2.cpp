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
		
};
int main()
{
	Check c1;
	c1.AgeCheck();
	return 0;
	
}
