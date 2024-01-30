#include<iostream>
using namespace std;
class Dis{
	public :
	int feet,inc,i,sum=0,sum1=0;
	
	void input()
	{
		cout << "entre the feet : ";
		cin >> feet;
		
		cout << "entre the inc : ";
		cin >> inc;
		
		cout << "entre the feet : ";
		cin >> feet;
		
		cout << "entre the inc : ";
		cin >> inc;
		
		sum= feet+feet;
		sum1=inc+inc;
	}
	void output()
	{
		for(i=0; i<inc; i++)
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
