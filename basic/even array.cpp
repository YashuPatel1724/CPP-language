#include<iostream>
using namespace std;
main()
{
	int a[5];
	int i;
	
	for(i=0; i<5; i++)
	{
		cout << "entre the value of a["<< i << "]";
		cin >> a[i];
	}
	cout << endl;
	
	for(i=0; i<5; i++)
	{
		cout << a[i];	
	}
	cout << "even : " << endl;
	for(i=0; i<5; i++)
	{
		if(a[i]%2==0)
		{
			cout << a[i];
		}
	}	
	
}
