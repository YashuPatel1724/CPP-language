#include<iostream>
using namespace std;
main()
{
	int feet;
	int inc;
	int i;
	
	cout << "entre the feet : " << endl;
	cin >> feet;
	
	
	cout << "entre the inch : " << endl;
	cin >> inc;
	
	for(i=1; i<=inc; i++)
	{
		if(inc>=12)
		{
			inc-=12;
			feet++;
		}
		else 
		{
			cout << "enter inch up to 12";
		}
	}
}
