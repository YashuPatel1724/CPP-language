#include<iostream>
using namespace std;
int main()
{
	int sec,min,hour=0;
	cout << " entre the second ";
	cin >> sec;
	int i;
	for(i=0; i<sec; i++)
	{
		if(sec >= 60)
		{
			sec-=60;
			min++;
		}
		if(min >=60)
		{
			min=60-min;
			hour++;
		}
	}
	
	cout << hour <<":" << min << ":" << sec;
	return 0;
}
