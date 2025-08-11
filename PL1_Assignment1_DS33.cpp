#include <iostream>
#include <iomanip>

using namespace std;

typedef struct date
{
	int day, month, year;
}date;

typedef struct book
{
	int id;
	string name;
	date pb_date;
}book;

int main()
{
	int n;
	
	cout<<"Please enter the number of books: ";
	cin>>n;
	
	book books[n];
	
	int s_c;
	do
	{
	
		int choice;
		cout<<"Please enter 1 to add books, 2 to search a book, 3 to view all the books: ";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
			{	
				for(int i = 0; i < n; i++)
      				{
        				cout<<"Please enter the book id and name of book"<<i+1<<": "<<endl;
        				cin>>books[i].id>>books[i].name;
    
        				cout<<"Please enter the date of publishing in dd mm yyyy format: "<<endl;
        				cin>>books[i].pb_date.day>>books[i].pb_date.month>>books[i].pb_date.year;
      				}
      				break;
			}
			
			case 2:
			{
				int search_id;
				
				cout<<"Please enter the book id to search: ";
				cin>>search_id;
				
				int found = 0;
				
				for(int i = 0; i < n; i++)
      				{
        				if(search_id == books[i].id)
        				{
        					cout<<"The details of the wanted book are:"<<endl<<"Id: "<<books[i].id<<endl<<"Name: "<<books[i].name<<endl<<"Publishing date: "<<books[i].pb_date.day<<"/"<<books[i].pb_date.month<<"/"<<books[i].pb_date.year<<endl;
        					
        					found++;
        				}
      				}
      				if(found == 0)
        				{
        					cout<<"Book not found";
        				}
			}
			
			case 3:
			{
				cout<<setw(38)<<setfill('-')<<"-"<<endl;
				cout<<setfill(' ');
				cout<<"|"<<setw(4)<<right<<"ID"<<"|";
				cout<<setw(20)<<left<<"       NAME"<<"|";
				cout<<setw(10)<<right<<"DATE"<<"|"<<endl;
				cout<<setw(38)<<setfill('-')<<"-"<<endl;
				cout<<setfill(' ');
				
				for(int i = 0; i < n; i++)
				{
					cout<<"|"<<setw(4)<<right<<books[i].id<<"|";
					cout<<setw(20)<<left<<books[i].name<<"|";
					cout<<setw(3)<<right<<books[i].pb_date.day<<"/"<<books[i].pb_date.month<<"/"<<books[i].pb_date.year<<"|"<<endl;
				}
				cout<<setw(38)<<setfill('-')<<"-"<<endl;
				cout<<setfill(' ');
			}
		}
		
		cout<<"Please enter 0 to stop and 1 to continue: ";
		cin>>s_c;
	
	}while(s_c);
	
	return 0;
}
