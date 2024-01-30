#include<iostream>
using namespace std;
class Dis{
	public :
	int feet1,feet2,inc1,inc2,i,sum=0,sum1=0;
	
	void input()
	{
		cout << "entre the feet : ";
		cin >> feet1;
		
		cout << "entre the inc : ";
		cin >> inc1;
		
		cout << "entre the feet : ";
		cin >> feet2;
		
		cout << "entre the inc : ";
		cin >> inc2;
		
		sum= feet1+feet2; // 
		sum1=inc1+inc2;
	}
	void output()
	{
		for(i=0; i<sum1; i++)
		{
			if(sum1 >= 12)
			{
				sum1-=12;
				sum++;
			}
		}
		cout << " feet is: "<< sum <<endl;
		cout << " inch is: " << sum1 <<endl;
	}
};
main()
{
	Dis d;
	d.input();
	d.output();
}
