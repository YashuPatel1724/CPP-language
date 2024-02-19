#include<iostream>
using namespace std;

class Meassage
{
	protected : 
	string msg,newmsg;
	
	public : 
	  Meassage(string msg)
	{
		this->msg = msg;
	}	
	
	void print()
	{
		cout << msg<<endl;
	}
	void print(string newmsg)
	{
		cout << msg << " " << newmsg << endl;
	}
};
int main()
{
	Meassage m1("hello");
	m1.print();
	m1.print("flutter");
	return 0;
}
