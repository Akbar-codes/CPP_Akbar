#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<iomanip.h>
#include<ctype.h>
#include<stdio.h>
#include<process.h>
typedef int bool;
#define false 0
#define true 1



//*************************************************************
//                      CLASS USED IN PROJECT
//*************************************************************



class book
{
      int bid;
      char name[50];
      int price;
      char category[20];
public:
      void create_book();   //function to get data from user
      void show_book();     //function to show data on screen
      void modify();           //function to add new data
      void report() const;      //function to show data in
				//tabular form
      int retbookno() const;      //function to return book
				  //number
      int retprice() const;   //function to return book
			      //price
      char retcat(char*) const;     //function to return
				    //category of book
};
//*************************************************************
//                 CLASS ENDS HERE
//*************************************************************
void book::create_book()
{
     cout<<"\n Enter the BOOK ID : " ;
     cin>>bid;
     cout<<"\n\n Enter the name of the BOOK : ";
     cin.ignore();
     gets(name);
     cout<<"\n Enter the category : ";
     gets(category);
     cout<<"\n Enter the price : Rs. ";
     cin>>price;
     cout<<"\n\n Book added...";
}

void book::show_book()
{
     cout<<"\n Book ID : "<<bid;
     cout<<"\n Book Name : ";
     cout<<name;
     cout<<"\n Category : "<<category;
     cout<<"\n Price : "<<price;
}

void book::modify()
{
     cout<<"\n Book ID : "<<bid;
     cout<<"\n New Name of Book Name : ";
     cin.ignore();
     gets(name);
     cout<<"\n New Category : ";
     cin>>category;
     cout<<"\n New Price : ";
     cin>>price;
}

void book::report() const
{
     cout<<bid<<setw(10)<<" "<<name<<setw(10)<<" "<<category
	 <<setw(6)<<price<<endl;
}

int book::retbookno() const
{
    return bid;
}

int book::retprice() const
{
    return price;
}

char book::retcat(char* category) const
{
     return *category;
}

//*************************************************************
//                   FUNCTION PROTOTYPES
//*************************************************************
void add_book();  //funtion to write record OR add book in
		  //binary file
void display_sp(int);  //funtion to display book details OR
		       //book details given by user
void update_book(int); //function to modify record OR update
		       //book of file
void delete_book(int);//function to delete record of file
void display_all();    //funtion to display all book details
void intro(); //introductory screen function

//*************************************************************
//                      MAIN FUNCTION
//*************************************************************

void main()
{
     char ch, pass[10];
     int num;
     intro();
     do
     {
	  clrscr();
	  cout<<"\n\n\n\t ____________________";
	  cout<<"\n\n\t MAIN MENU"<<endl;
	  cout<<"\t ____________________";
	  cout<<"\n\n\t 01. ADD NEW BOOKS";    //insertion
	  cout<<"\n\n\t 02. SEARCH BOOKS";     //searching
	  cout<<"\n\n\t 03. ALL BOOKS LIST";   //printing
	  cout<<"\n\n\t 04. DELETE BOOKS";     //deletion
	  cout<<"\n\n\t 05. UPDATE BOOKS";     //modification
	  cout<<"\n\n\t 06. EXIT";
	  cout<<"\n\n\t 07. RETURN TO INTRO";
	  cout<<"\n\n\t Select your option (1-7) ";
	  cin>>ch;
	  clrscr();
	  switch(ch)
	  {
	  case '1':
	       add_book();
	       break;
	  case '2':
	       cout<<"\n\n\t Enter the Book ID. : ";cin>>num;
	       display_sp(num);
	       break;
	  case '3':
	       display_all();
	       break;
	  case '4':
	       cout<<"\n\n\t Enter the Book ID. : ";cin>>num;
	       delete_book(num);
	       break;
	  case '5':
	       cout<<"\n\n\t Enter the Book ID. : ";cin>>num;
	       update_book(num);
	       break;
	  case '6':
	       cout<<"\n\n\t Thanks for using bookshop "
		   <<"management system";
	       break;
	  case '7':
	       intro();
	       break;
	  default:cout<<"\a";
		  break;
	  }
     cin.ignore();
     cin.get();
     }while(ch!='6');
     getch();
}

//*************************************************************
//         FUNCTION TO WRITE IN FILE
//*************************************************************

void add_book()
{
     book bo;
     ofstream fout;
     fout.open("bookshop.txt",ios::binary|ios::app);
     bo.create_book();
     fout.write((char*) (&bo) ,sizeof(book) );
     fout.close();
}

//*************************************************************
//         FUNCTION TO READ SPECIFIC RECORD FROM FILE
//*************************************************************

void display_sp(int n)
{
     book bo;
     bool flag=false;
     ifstream fin;
     fin.open("bookshop.txt",ios::binary);
     if(!fin)
     {
	cout<<"File is not available!!! Press any key...";
	return;
     }
     cout<<"\n BOOK DETAILS \n";

     while(fin.read( (char*) (&bo), sizeof(book) ) )
	  {
	     if(bo.retbookno()==n)
	     {
		bo.show_book();
		flag=true;
	     }
	  }
	  fin.close();
	  if(flag==false)
	     cout<<"\n\n Book does not exist";
}

//*************************************************************
//         FUNCTION TO MODIFY RECORD OF FILE
//*************************************************************

void update_book(int n)
{
     bool found=false;
     book bo;
     fstream f;
     f.open("bookshop.txt",ios::binary|ios::in|ios::out);
       if(!f)
       {
	  cout<<"File is not available!!! Press any key...";
	  return;
       }
     while(!f.eof()&& found==false)
     {
	  f.read( (char*) (&bo), sizeof(book) );
	  if(bo.retbookno()==n)
	  {
	     bo.show_book();
	     cout<<"\n\n Enter the New Details of Book "<<endl;
	     bo.modify();
	     int pos=(-1)*(sizeof(book) );
	     f.seekp(pos,ios::cur);
	     f.write( (char*) (&bo), sizeof(book) );
	     cout<<"\n\n\t Book Updated...";
	     found=true;
	  }
     }
     f.close();
     if(found==false)
     cout<<"\n\n Book Not Found ";
}

//*************************************************************
//         FUNCTION TO DELETE RECORD OF FILE
//*************************************************************

void delete_book(int n)
{
     book bo;
     ifstream fin;
     ofstream fout;
     fin.open("bookshop.txt",ios::binary);
     if(!fin)
     {
	cout<<"File is not available!!! Press any key...";
	return;
     }
     fout.open("Temp.txt",ios::binary);
     fin.seekg(0,ios::beg);
     while(fin.read( (char*) (&bo), sizeof(book) ))
     {
	  if(bo.retbookno()!=n)
	  {
		fout.write( (char*) (&bo), sizeof(book) );
	  }
     }
     fin.close();
     fout.close();
     remove("bookshop.txt");
     rename("Temp.txt","bookshop.txt");
     cout<<"\n\n\t Book Deleted...";
}

//*************************************************************
//         FUNCTION TO DISPLAY ALL BOOKS PRICE LIST
//*************************************************************

void display_all()
{
     book bo;
     ifstream fin;
     fin.open("bookshop.txt",ios::binary);
     if(!fin)
     {
	 cout<<"File is not available!!! Press any key...";
	 return;
     }
     cout<<"\n\n\t\t ALL BOOKS LIST\n\n";
     cout<<"====================================================\n";
     cout<<"BOOK ID       NAME                Type    Price\n";
     cout<<"====================================================\n";
     while(fin.read( (char*) (&bo), sizeof(book) ))
	  {
		bo.report();
	  }
     fin.close();
}

//*************************************************************
//         INTRODUCTION FUNCTION
//*************************************************************

void intro()
{
     clrscr();
     cout<<"\n\n\n\t\t\t   BOOKSHOP";
     cout<<"\n\n\t\t\tMANAGEMENT";
     cout<<"\n\n\t\t\t  SYSTEM";
     cout<<"\n\n\n\n\t\tMADE BY : Mohammed Akbar AND Athak Shrivastav";
     cout<<"\n\n\t\tSCHOOL : SICA S.S. SCHOOL";
     cout<<"\n\n\n\t _______________________________________";
     cout<<"\n\t |Press          | ENTER |  for MAIN MENU|";
     cout<<"\n\t |_______________________________________|";
     cin.get();
}

//*************************************************************
//         END OF PROJECT
//*************************************************************