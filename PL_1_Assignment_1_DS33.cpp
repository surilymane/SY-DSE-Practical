#include <iostream>
#include <string>

using namespace std;

typedef struct date
{
  int day, month, year;
}date;

typedef struct book
{
  string name;
  int book_id;
  date pub_date;
}book;

int main()
{
  int n;
  
  cout<<"Please enter the number of books: "<<endl;
  cin>>n;
  
  book books[n];
  
  for(int i = 0; i < n; i++)
  {
    cout<<"Please enter the book name and id of book"<<i+1<<": "<<endl;
    cin>>books[i].name>>books[i].book_id;
    
    cout<<"Please enter the date of publishing in dd mm yyyy format: "<<endl;
    cin>>books[i].pub_date.day>>books[i].pub_date.month>>books[i].pub_date.year;
  }
  
  int id;
  
  cout<<"Please enter a book ID to view details: "<<endl;
  cin>>id;
    
  int count = 0;
  
  for(int j = 0; j < n; j++)
  {
    if(id == books[j].book_id)
    {
      cout<<"The details of the book are:"<<endl<<"Name: "<<books[j].name<<endl<<"ID: "<<books[j].book_id<<endl<<"Date of Publishing: "<<books[j].pub_date.day<<"/"<<books[j].pub_date.month<<"/"<<books[j].pub_date.year<<endl;
      
      count++;
      
      break;
    }
  }
  
  if(count == 0)
  {
    cout<<"Invalid ID."<<endl;
  }
  
  return 0;
}
  
  
  
