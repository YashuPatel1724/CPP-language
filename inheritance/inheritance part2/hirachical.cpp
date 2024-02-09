#include<iostream>
using namespace std;

class RBI
{
	protected :
		float rate,rate1,rate2;
	public :
		
	void sbi()
	{
		cout << "SBI intrest rate ";
		cin >> rate;
	}
	
	void bob()
	{
		cout << "BOB intrest rate ";
		cin >> rate1;
	}	
	
	void icici()
	{
		cout << "ICICI intrest rate ";
		cin >> rate2;
	}	
	
			
};

class SBI : public RBI
{
	public :
		void get()
		{
			sbi();
			cout << "SBI rate is " <<rate << endl <<endl;
		}
	
};

class BOB: public RBI
{
	public :
	void get()
	{
		bob();
		cout << "BOB intrest rate "<< rate1<< endl <<endl;
	}
};

class ICICI: public RBI
{
	public :
	void get()
	{
		icici();
		cout << "ICICI intrest rate "<< rate2<< endl <<endl;
	}
};

int main()
{
	
	SBI s1;
	s1.get();
	
	BOB b1;
	b1.get();
	
	ICICI c1;
	c1.get();
	
	return 0;
}
