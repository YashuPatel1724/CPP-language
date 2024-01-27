#include<iostream>
using namespace std;
main()
{
	int feet;
	int inc;
	int i;
	
	cout << "entre the feet : ";
	cin >> feet;
	
	
	cout << "entre the inch : ";
	cin >> inc;
	
	for(i=1; i<=inc; i++)
	{
		if(inc>=12)
		{
			inc-=12;
			feet++;
		}
	}
	
	cout << " feet : "<< feet << endl;
	cout << " inc : "<< inc;
}
