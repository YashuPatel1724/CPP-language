#include<iostream>
#include<string.h>
using namespace std;

class Diam
{
	int comp_id,comp_staff_quantity,comp_revenue,comp_import_raw_diamonds,comp_export_diamonds;
	string comp_ceo;
	public :
	
	
	Diam(string comp_name)
	{
		cout <<"company name : " << comp_name;
	}

	
	void setter()
	{
		cout << "Enter the comp id : ";
		cin >> comp_id;
		
		cout << "Enter the company staf quantity : ";
		cin >>   comp_staff_quantity;
		cin.ignore();
		
		cout << "Enter the  company revenue : ";
		cin >> comp_revenue;
		
		cout << "Enter the company import raw diamond : ";
		cin >>comp_import_raw_diamonds;	
		
		cout << "Enter the company export dimond  : ";
		cin >>comp_export_diamonds;
	}	
	
	void getter()
	{

		cout << "comp id  : " <<  comp_id<< endl;
		
		cout << "company staf quantity: " << comp_staff_quantity << endl;
		
		cout << "company revenue  : " << comp_revenue << endl;
		
		cout << "company import raw diamond : " << comp_import_raw_diamonds << endl;
		
		cout << "company export dimond : " <<   comp_export_diamonds << endl;
		
	}
	
	
};


	
int main()
{
	Diam D1("yashu patel");
	
	
	

	
		cout << endl;
		
		
	
		D1.setter();
		
		cout << endl;
		
		
		D1.getter();
		
	
	return 0;
}
