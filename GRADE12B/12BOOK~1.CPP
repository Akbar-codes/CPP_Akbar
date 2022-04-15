#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<iomanip.h>
#include<ctype.h>
#include<stdio.h>
typedef int bool;
#define false 0
#define true 1



//*************************************************************
//                      CLASS USED IN PROJECT
//*************************************************************



class account
{
      int acno;
      char name[50];
      int price;
      char category;
public:
      void create_account();   //function to get data from user
      void show_account();     //function to show data on screen
      void modify();           //function to add new data
      void pur(int);           //function to accept amount and add to balance
      void draw(int);  //function to accept amount and subtract from balance
      void report() const;      //function to show data in tabular form
      int retacno() const;      //function to return account number
      int retpurosit() const;   //function to return balance amount
      char rettype() const;     //function to return type of account
};
//*************************************************************
//                 CLASS ENDS HERE
//*************************************************************
void account::create_account()
{
     cout<<"\n Enter the account no. : " ;
     cin>>acno;
     cout<<"\n\n Enter the name of the account holder : ";
     cin.ignore();
     gets(name);
     cout<<"\n Enter type of account (C/S) : ";
     cin>>type;
     type=toupper(type);
     cout<<"\n Enter the intial amount(>=500 for Saving"
	 <<" and>=1000 for current) : ";
     cin>>deposit;
     cout<<"\n\n Account Created...";
}

void account::show_account()
{
     cout<<"\n Account No. : "<<acno;
     cout<<"\n Account Holder Name : ";
     cout<<name;
     cout<<"\n Type of Account : "<<type;
     cout<<"\n Balance Amount : "<<deposit;
}

void account::modify()
{
     cout<<"\n Account No. : "<<acno;
     cout<<"\n New Name of Account Holder : ";
     cin.ignore();
     gets(name);
     cout<<"\n New Type of Account : ";
     cin>>type;
     type=toupper(type);
     cout<<"\n New Balance Amount : ";
     cin>>deposit;
}

void account::pur(int x)
{
     deposit+=x;
}

void account::draw(int x)
{
     deposit-=x;
}

void account::report() const
{
     cout<<acno<<setw(10)<<" "<<name<<setw(10)<<" "<<type
	 <<setw(6)<<deposit<<endl;
}

int account::retacno() const
{
    return acno;
}

int account::retdeposit() const
{
    return deposit;
}

char account::rettype() const
{
     return type;
}

//*************************************************************
//                   function prototypes
//*************************************************************
void write_account();  //funtion to write record in binary file
void display_sp(int);  //funtion to display account details
		       //given by user
void modify_account(int); //function to modify record of file
void delete_account(int);//function to delete record of file
void display_all();    //funtion to display all account details
void deposit_withdraw(int,int);//funtion to deposit/withdraw
			      //amount for given account
void intro(); //introductory screen function

//*************************************************************
//                      MAIN FUNCTION
//*************************************************************

void main()
{
     char ch;
     int num;
     intro();
     do
     {
	  clrscr();
	  cout<<"\n\n\n\t MAIN MENU";
	  cout<<"\n\n\t 01. NEW ACCOUNT";
	  cout<<"\n\n\t 02. DEPOSIT AMOUNT";
	  cout<<"\n\n\t 03. WITHDRAW AMOUNT";
	  cout<<"\n\n\t 04. BALANCE ENQUIRY";
	  cout<<"\n\n\t 05. ACCOUNT HOLDERS LIST";
	  cout<<"\n\n\t 06. CLOSE AN ACCOUNT";
	  cout<<"\n\n\t 07. MODIFY AN ACCOUNT";
	  cout<<"\n\n\t 08. EXIT";
	  cout<<"\n\n\t Select your option (1-8) ";
	  cin>>ch;
	  clrscr();
	  switch(ch)
	  {
	  case '1':
	       write_account();
	       break;
	  case '2':
	       cout<<"\n\n\t Enter the Account No. : "; cin>>num;
	       deposit_withdraw(num,1);
	       break;

	  case '3':
	       cout<<"\n\n\t Enter the Account No. : ";cin>>num;
	       deposit_withdraw(num,2);
	       break;
	  case '4':
	       cout<<"\n\n\t Enter the Account No. : ";cin>>num;
	       display_sp(num);
	       break;
	  case '5':
	       display_all();
	       break;
	  case '6':
	       cout<<"\n\n\t Enter the Account No. : ";cin>>num;
	       delete_account(num);
	       break;
	  case '7':
	       cout<<"\n\n\t Enter the Account No. : ";cin>>num;
	       modify_account(num);
	       break;
	  case '8':
	       cout<<"\n\n\t Thanks for using bank management system";
	       break;
	  default:cout<<"\a";
	  }
     cin.ignore();
     cin.get();
     }while(ch!='8');
     getch();
}

//*************************************************************
//         function to write in file
//*************************************************************

void write_account()
{
     account ac;
     ofstream fout;
     fout.open("account.txt",ios::binary|ios::app);
     ac.create_account();
     fout.write((char*) (&ac) ,sizeof(account) );
     fout.close();
}

//*************************************************************
//         function to read specific record from file
//*************************************************************

void display_sp(int n)
{
     account ac;
     bool flag=false;
     ifstream fin;
     fin.open("account.txt",ios::binary);
     if(!fin)
     {
	cout<<"File is not available!!! Press any key...";
	return;
     }
     cout<<"\n BALANCE DETAILS \n";

     while(fin.read( (char*) (&ac), sizeof(account) ) )
	  {
	     if(ac.retacno()==n)
	     {
		ac.show_account();
		flag=true;
	     }
	  }
	  fin.close();
	  if(flag==false)
	     cout<<"\n\n Accoint number does not exist";
}

//*************************************************************
//         function to modify record of file
//*************************************************************

void modify_account(int n)
{
     bool found=false;
     account ac;
     fstream f;
     f.open("account.txt",ios::binary|ios::in|ios::out);
       if(!f)
       {
	  cout<<"File is not available!!! Press any key...";
	  return;
       }
     while(!f.eof()&& found==false)
     {
	  f.read( (char*) (&ac), sizeof(account) );
	  if(ac.retacno()==n)
	  {
	     ac.show_account();
	     cout<<"\n\n Enter the New Details of Account "<<endl;
	     ac.modify();
	     int pos=(-1)*(sizeof(account) );
	     f.seekp(pos,ios::cur);
	     f.write( (char*) (&ac), sizeof(account) );
	     cout<<"\n\n\t Record Updated";
	     found=true;
	  }
     }
     f.close();
     if(found==false)
     cout<<"\n\n Record Not Found ";
}

//*************************************************************
//         function to delete record of file
//*************************************************************

void delete_account(int n)
{
     account ac;
     ifstream fin;
     ofstream fout;
     fin.open("account.txt",ios::binary);
     if(!fin)
     {
	cout<<"File is not available!!! Press any key...";
	return;
     }
     fout.open("Temp.txt",ios::binary);
     fin.seekg(0,ios::beg);
     while(fin.read( (char*) (&ac), sizeof(account) ))
     {
	  if(ac.retacno()!=n)
	  {
		fout.write( (char*) (&ac), sizeof(account) );
	  }
     }
     fin.close();
     fout.close();
     remove("account.txt");
     rename("Temp.txt","account.txt");
     cout<<"\n\n\t Record Deleted...";
}

//*************************************************************
//         function to display all accounts deposit list
//*************************************************************

void display_all()
{
     account ac;
     ifstream fin;
     fin.open("account.txt",ios::binary);
     if(!fin)
     {
	 cout<<"File is not available!!! Press any key...";
	 return;
     }
     cout<<"\n\n\t\t ACCOUNT HOLDERS LIST\n\n";
     cout<<"====================================================\n";
     cout<<"A/c no.       NAME           Type  Balance\n";
     cout<<"====================================================\n";
     while(fin.read( (char*) (&ac), sizeof(account) ))
	  {
		ac.report();
	  }
     fin.close();
}

//*************************************************************
//         function to deposit and withdraw amounts
//*************************************************************

void deposit_withdraw(int n, int option)
{
     int amt;
     bool found=false;
     account ac;
     fstream f;
     f.open("account.txt",ios::binary|ios::in|ios::out);
     if(!f)
     {
	cout<<"File is not available!!! Press any key...";
	return;
     }
     while(!f.eof() && found==false)
     {
	  f.read( (char*) (&ac), sizeof(account) );
	  if(ac.retacno()==n)
	  {
		ac.show_account();
		if(option==1)
		{
		   cout<<"\n\n\tTO DEPOSIT AMOUNT ";
		   cout<<"\n\nEnter the amount to be deposited";
		   cin>>amt;
		   ac.pur(amt);
		}
		if(option==2)
		{
		   cout<<"\n\n\tTO WITHDRAW AMOUNT ";
		   cout<<"\n\nEnter the amount to withdraw";
		   cin>>amt;
		   int bal=ac.retdeposit()-amt;
		if( (bal<500 && ac.rettype()=='S')||(bal<1000
		     && ac.rettype()=='C') )
		     cout<<"Insufficience in balance";
		else
		     ac.draw(amt);
		}
		int pos=(-1)*( sizeof(ac) );
		f.seekp(pos,ios::cur);
		f.write( (char*) (&ac), sizeof(account) );
		cout<<"\n\n\t Record Updated";
		found=true;
	  }
     }
     f.close();
     if(found==false)
	cout<<"\n\n Record Not Found ";
}

//*************************************************************
//         INTRODUCTION FUNCTION
//*************************************************************

void intro()
{
     cout<<"\n\n\n\t   BANK";
     cout<<"\n\n\tMANAGEMENT";
     cout<<"\n\n\t  SYSTEM";
     cout<<"\n\n\n\nMADE BY : Aditya Trivedi AND Yuvraj Dighe";
     cout<<"\n\nSCHOOL : SICA S.S. SCHOOL";
     cin.get();
}

//*************************************************************
//         END OF PROJECT
//*************************************************************