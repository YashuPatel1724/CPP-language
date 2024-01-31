#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	
		
	int stu_id,stu_age;
	string line,stu_name, stu_city, stu_course,stu_email,stu_college;
	
	
	public :
	void setter()
	{
		cout << "Enter the student id : ";
		cin >> stu_id;
		getline(cin,line);
		
		cout << "Enter the student name : ";
		cin >> stu_name;
		
		cout << "Enter the student age : ";
		cin >> stu_age;
		getline(cin,line);
		
		cout << "Enter the course : ";
		cin >>   stu_course;
		
		cout << "Enter the  student city : ";
		cin >>  stu_city;
		
		cout << "Enter the student email: ";
		cin >> stu_email;
		getline(cin,line);
		
		cout << "Enter the student collage : ";
		cin >> stu_college;	
	}	
	
	void getter()
	{
		cout << "student Id : " << stu_id << endl;
		
		cout << "student Name : " << stu_name << endl;
		
		cout << "student Age : " << stu_age << endl;
		
		cout << "student course : " << stu_course << endl;
		
		cout << "student city : " <<  stu_city << endl;
		
		cout << "customer student email : " << stu_email << endl;
		
		cout << "Enter the student collage : " << stu_college << endl;
		
	}
};
int main()
{
	Student s1[5];
	
	int i;
	
	for(i=0; i<5; i++)
	{
			cout << endl;
		cout << "student Information " << i+1 << endl<<endl;
		s1[i].setter();
		cout << endl;
		cout << "student Information " << i+1 << endl<<endl;
		s1[i].getter();
		
	}
	return 0;
}
