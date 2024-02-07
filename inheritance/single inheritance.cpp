#include<iostream>
using namespace std;
class X
{
	protected :
		int a,b,c;
};
class Y : public X
{
	protected :
		int sum = 0,ans;
		
	public :
	 void set()
	 {
	 	cout << "Entre the a: ";
	 	cin >> a;
	 	
	 	cout << "Entre the b: ";
	 	cin >> b;
	 	
	 	cout << "Entre the c: ";
	 	cin >> c;
	 }
	 
	 void get()
	 {
	 	sum = a + b + c;
	 	
	 	cout << endl;
	 	
	 	cout << "sum is : " << sum;
	 	
	 	cout << endl << endl;
	 	
	 	ans = sum*sum*sum;
	 	
	 	cout << "cube is : " << ans;
	 	
	 }
};

main()
{
	Y y1;
	
	y1.set();
	y1.get();
	
}
