#include<iostream>
using namespace std;
// Write a Program that defines a shape class with a constructor that gives value to width and height.
// Then define two sub-classes triangle and rectangle, that calculate the area of the shape area (). 
// In the main, define two objects a triangle and a rectangle, and then call the area() function using these two objects.

class SHAPE
{
	protected : 
	int width,height;
	
//	public :
		SHAPE()
		{
			cout << "entre the width : ";
			cin >> width;
			
			cout << "entre the heigth : ";
			cin >> height;
		}
};

class Tringle : public SHAPE
{
	protected : 
	 int ans;
	public :
		void area()
		{
			
			ans = height* width/2;
			
			cout << "tringle area is : " <<ans << endl << endl;	
		}
};

class Rectangle : public SHAPE
{
	protected : 
	 int ans;
	public :
		void area()
		{
			ans = height* width;
			
			cout << "rectangle area is : " << ans << endl;	
		}
};

int main()
{

	Tringle t1;
	t1.area();
	
	Rectangle r1;
	r1.area();
	return 0;
}
