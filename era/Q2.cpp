#include<iostream>
using namespace std;
class Time{
	public :
	int hour,min,sec,i,x;
	
	void input()
	{
		cout << "entre the sec : ";
		cin >> sec;
	}
	void output()
	{
		hour = sec/3600;
		x= sec%3600;
		min = x /60;
		sec = sec%60;
		
		cout << hour <<":"<<min<<":"<<sec;3
	}
};
main()
{
	Time t;
	t.input();
	t.output();
}
