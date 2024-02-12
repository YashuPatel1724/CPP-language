#include<iostream>
using namespace std;
//Q.2 Write a Program to demonstrate an example of hierarchical inheritance to get the square and cube of a number.

class Numbers
{
	protected : 
	int a;
	
	public : 
	void set()
	{
		cout << "entre the value of a: ";
		cin >> a;
	}
	
};

class Square : public Numbers
{
	protected : 
	int ans;
	public :

	void square()
	{
		set();
		ans = a*a;
		cout << "square is : " << ans << endl;
	}
};

class Cube : public Numbers
{
		protected : 
	int ans;
	public :

	void cube()
	{
		set();
		ans = a*a*a;
		cout << "cube is : " << ans <<;
	}
};

int main()
{
	Square s1;
	s1.square();
	
	Cube c1;
	c1.cube();
	return 0;
	
}
