#include<iostream>
//Requirements:
//(A) User Input: 
//- Train Number
//- Train Name
//- Source
//- Destination
//- Train Time
//(B) Display Records: 
//- All Records
//- By Searching Train Number
//(C) Minimum 3 Input Train Records

using namespace std;
class Rail{
	int Train_Time;
	string Train_Name,Destination;
	
	static string Source;
	
	public :
		int train_num;
	Rail(int num,int Time,string Name, string Destination)
	{
		train_num = num;
		Train_Time = Time;
		Train_Name = Name;
//		this->Source = Source;
		this->Destination = Destination;	
	}

	void get()
	{
		cout << " train id : " << train_num << endl;
		
		cout << " train name : " << Train_Name << endl;
		
		cout <<" train source : " << Source << endl;
		
		cout <<" train Destination : " << Destination << endl;
		
		cout << " train train time : " << Train_Time << endl;
	}
};

	 string Rail::Source = "surat";




int main()
{
	int i,n,num,Time;
	string Name,Source,Destination;
	Rail r[3]=Rail(num,Time,Name,Destination);
	for(i=0; i<3; i++)
 	{
			cout << "enter the train numbre : ";
			cin >> num;
			
			cin.ignore();
			
			cout << "entre the train name : ";
			getline(cin,Name);
			
		
			
			cout << "entre the train dectination : ";
			getline(cin,Destination);
			
			cout << "enter the train time : ";
			cin >>Time;
			cin.ignore();
			
			r[i]=Rail(num,Time,Name,Destination);
			
			
	}
	cout << "serach train : ";
	cin >> n;
	
	cout << endl << endl;
	for(i=0; i<3; i++)
	{
		if(n==r[i].train_num)
		{
			r[i].get();
		}
	}
	
	return 0;

}
