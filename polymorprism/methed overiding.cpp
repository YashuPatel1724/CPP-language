#include<iostream>
using namespace std;

class ClassCricket
{
	protected :
		int over;
		
		public :
			void getover(int over)
			{
				this->over=over;
				cout << "class cricket : "<< this->over << endl;
			}
};

class ClassT20Match : public  ClassCricket
{
	public :
		
			void getover(int over)
			{
				this->over=over;
				cout << "class t20 : "<< this->over << endl;
			}
};

class ClassODIMatch : public  ClassCricket
{
	public :
			void getover(int over)
			{
				this->over=over;
				cout << "class odi : "<< this->over << endl;
				
			}
};

int main()
{
	ClassT20Match t1;
	t1.getover(20);
	
	ClassODIMatch o1;
	o1.getover(50);
	return 0;
}
