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
	student n[2];
	
	for(int i = 0; i < 2; i++)
	{
		cout<<"Please enter the name and surname of student "<<i+1<<": "<<endl;
		cin>>n[i].name>>n[i].surname;
	
		cout<<"Please enter the division and roll no. of student "<<i+1<<": "<<endl;
		cin>>n[i].division>>n[i].roll_no;
	
		cout<<"Please enter the date of birth of student "<<i+1<<": "<<endl;
		cin>>n[i].dob.day>>n[i].dob.month>>n[i].dob.year;
	}
	
	for(int j = 0; j < 2; j++)
	{
		cout<<"The details of student "<<j+1<<" are:"<<endl<<n[j].name<<" "<<n[j].surname<<endl<<n[j].division<<n[j].roll_no<<endl<<n[j].dob.day<<"/"<<n[j].dob.month<<"/"<<n[j].dob.year<<endl;
	}
	
	return 0;
}
