#include<iostream>
#include<string.h>
using namespace std;

class Hotel
{
	
		
	int  hotel_id,hotel_rating,hotel_staff_quantity,hotel_room_quantity;
	
	string hotel_type, hotel_location;
	
	static string  hotel_name;
	static int hotel_establish_year;
	
	public :
		
	
	void setter()
	{
		cout << "Enter the hotel id : ";
		cin >> hotel_id;
		
		cin.ignore();
		cout << "Enter the Hotel Type : ";
		getline(cin,hotel_type);
		
		cout << "Enter the Hotel Rating : ";
		cin >>   hotel_rating;
		cin.ignore();
		cout << "Enter the  hotel loction : ";
		getline(cin,hotel_location);
		
		cout << "Enter the hotel staf quantity : ";
		cin >>hotel_staff_quantity;	
		
		cout << "Enter the hotel room quantity : ";
		cin >>hotel_room_quantity;
	}	
	
	void getter()
	{
//		cout << "hotel Id "<<"hotel name "<< "Hotel Type  " << "Hotel Type  " <<"hotel location  " <<"hotel hotel year  " <<"Enter the hotel staf quantity   " <<"Enter the hotel room quantity   ";
//		
//		cout<< hotel_id << hotel_name << hotel_type << hotel_rating << hotel_location << hotel_establish_year << hotel_staff_quantity << hotel_room_quantity;
		cout << "hotel Id : " <<  hotel_id << endl;
		
		cout << "hotel name : "<< hotel_name<<endl;
		
		cout << "Hotel Type : " << hotel_type << endl;
		
		cout << "Hotel Type : " << hotel_rating << endl;
		
		cout << "hotel location : " <<  hotel_location << endl;
		
		cout << "hotel hotel year : " <<   hotel_establish_year << endl;
		
		cout << "Enter the hotel staf quantity  : " << hotel_staff_quantity << endl;
		
		cout << "Enter the hotel room quantity  : " << hotel_room_quantity << endl;
		
	}
};

	string  Hotel::hotel_name="prime hotel";
	
	int Hotel::hotel_establish_year= 2024;
	
int main()
{
	Hotel h1[5];
	
	int i;
	
	for(i=0; i<3; i++)
	{
		cout << endl;
		
		
		cout << "hotel Information " << i+1 << endl<<endl;
		h1[i].setter();
		
		cout << endl;
		
		cout << "hotel Information " << i+1 << endl<<endl;
		h1[i].getter();
		
	}
	return 0;
}
