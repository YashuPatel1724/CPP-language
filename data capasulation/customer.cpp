#include<iostream>
#include<string.h>
using namespace std;

class Cust
{
	
		
	int cust_id,cust_age,cust_simcard_validity;
	string line,cust_name,cust_city,cust_telecom_brand_name;
	double cust_mobile_number;
	
	public :
	void setter()
	{
		cout << "Enter the cust_id : ";
		cin >> cust_id;
		getline(cin,line);
		
		cout << "Enter the cust_name : ";
		cin >> cust_name;
		
		cout << "Enter the cust_age : ";
		cin >> cust_age;
		getline(cin,line);
		
		cout << "Enter the cust_city : ";
		cin >> cust_city;
		
		cout << "Enter the mobile number : ";
		cin >>  cust_mobile_number;
		
		cout << "Enter the simcard validity : ";
		cin >> cust_simcard_validity;
		getline(cin,line);
		
		cout << "Enter the telecom name : ";
		cin >> cust_telecom_brand_name;	
	}	
	
	void getter()
	{
		cout << "customer Id : " << cust_id << endl;
		cout << "customer Name : " << cust_name << endl;
		cout << "customer Age : " << cust_age << endl;
		cout << "customer city : " << cust_city << endl;
		cout << "customer mobile number : " << cust_mobile_number << endl;
		cout << "customer simcard validity : " << cust_simcard_validity << endl;
		cout << "customer brand name : " << cust_telecom_brand_name << endl;
		
	}
};
int main()
{
	Cust c1[5];
	
	int i;\
	
	for(i=0; i<5; i++)
	{
		cout << endl;
		
		cout << "Employee Information " << i+1 << endl<<endl;
		c1[i].setter();
		
		cout << endl;
		
		cout << "Employee Information " << i+1 << endl<<endl;
		c1[i].getter();
		
	}
	return 0;
}
