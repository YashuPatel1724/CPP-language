//(A) User Input:
//- Item Number
//- Item Name
//- Quantity
//- Price
//- Discount
//(B) Verify User Id And Password
//(C) Display Records:
//- All Records
//- By Searching Item Number
#include<iostream>
using namespace std;

class Item
{
	int Price,Quantity;
	string Item_Name;
	
	static int  Discount;
	public : 
	int Item_Number;
	
	Item(int Item_Number,int Price,int Quantity,string Item_Name)
	{
		this->Item_Number = Item_Number;
		this->Item_Name = Item_Name;
		this->Quantity = Quantity;
		this->Price = Price;
	
	}
	
	void get()
	{
		cout << "Item_Number : " << Item_Number << endl;
		cout << "Item_Name : " << Item_Name << endl;
		cout << "Discount : " << Discount << endl;
		cout << "Price : " << Price << endl;
		cout << "Quantity : " << Quantity << endl;
	}
	
};

	int Item::Discount = 20;
	
	
int main()
{
	int Item_Number,Quantity,Price,Discount;
	string Item_Name;
	
	Item s[3] = Item(Item_Number,Quantity,Price,Item_Name);
	int i,n;
	
	for(i=0; i<3; i++)
	{
		cout << "Enter the Item_Number : ";
		cin >> Item_Number;
		cin.ignore();
		
		cout << "Enter the Item_Name : ";
		getline(cin,Item_Name);
	
		cout << "Enter the Item_Quantity : ";
		cin >> Quantity;
		cin.ignore();
		
		cout << "Enter the Item_Price : ";
		cin >> Price;
		cin.ignore();
		
		cout << endl;
		
		s[i] = Item(Item_Number,Quantity,Price,Item_Name);
	}
	
	
	cout << "Enter the Your Item Num. : ";
	cin >> n;

	cout << endl << endl;
	
	for(i=0; i<3; i++)
	{
		if(n==s[i].Item_Number)
		{
			s[i].get();
		}
	}
	
	return 0;	
}

