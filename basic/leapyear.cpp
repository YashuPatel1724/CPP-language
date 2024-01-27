#include<iostream>
using namespace std;
main()
{
	int first,last,i,x=0;
	
	cout << "entre the first year : ";
	cin >> first;
	
	cout << "entre the last year : ";
	cin >> last;
	
	int len = last-first;
	int leap = len/4+1;
	int leapyear[leap];
	
	for(i=first; i<=last; i++)
	{
		if(i%4==0)
		{
			leapyear[x] = i;
			x++;	
		}
	}
	cout << endl;
	for(i=0; i<x; i++)
	{
		
	
	cout  << leapyear[i];
	
	}
}
