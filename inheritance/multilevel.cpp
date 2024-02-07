#include<iostream>
using namespace std;
class P
{
	protected :
		float cel;
		
		public :
		void set()
		{
			cout << " entre the celcious : ";
			cin >> cel;
		}
		
		
};
class Q : public P
{
	protected :
		float fern;
		
		public :
			
		void Fehrenheit()
		{
			fern = (cel * 9/5)  + 32;
	
		}
		

};
class R : public Q
{
	protected :
		float kel;
		
		public :
		
		void toKelvin()
		{
			set();
			Fehrenheit();
			kel  = (fern - 32) * 5/9 + 273.15;
		} 
		void get()
		{
			cout << "celsius is : " << cel << endl;
			
			cout << "fernhit is : " << fern << endl;
			
			cout << "kelwin is : " << kel << endl;
		}
		
		
};
main()
{ 
	R r1; 
	r1.toKelvin();
	r1.get();	
}
