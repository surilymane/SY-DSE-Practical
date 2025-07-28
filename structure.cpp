#include <iostream>
#include <string>

using namespace std;

typedef struct date
{
	int day;
	int month;
	int year;
}date;

typedef struct student
{
	int roll_no;
	string name;
	string surname;
	char division;
	date dob;
}student;

int main()
{
	student n1;
	
	cout<<"Please enter the name and surname of the student: "<<endl;
	cin>>n1.name>>n1.surname;
	
	cout<<"Please enter the division and roll no. of the student: "<<endl;
	cin>>n1.division>>n1.roll_no;
	
	cout<<"Please enter the birth date of the student: "<<endl;
	cin>>n1.dob.day>>n1.dob.month>>n1.dob.year;
	
	cout<<"The details of the student are:"<<endl<<n1.name<<" "<<n1.surname<<endl<<n1.division<<n1.roll_no<<endl<<n1.dob.day<<"/"<<n1.dob.month<<"/"<<n1.dob.year<<endl;
	
	return 0;
}
