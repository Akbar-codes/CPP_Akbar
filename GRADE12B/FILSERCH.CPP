//wap to search a record in a file
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
	class student
	{
	 int roll;
	 char name[20];
	 float marks;
	 public:
	      void getdata()
	      {
		cout<<"\n enter roll :- ";
		cin>>roll;
		cout<<"\n enter name :- ";
		gets(name);
		cout<<"\n enter marks :- ";
		cin>>marks;
	      }
	      void putdata()
	      {
		 cout<<"\n roll "<<roll;
		 cout<<"\n name "<<name;
		 cout<<"\n marks "<<marks;
	      }
	      int rolln()
	      {
		 return roll;
	      }
	};
void main()
{
     clrscr();
     char fname[10];
     int no;
     student stud;
     fstream finout;
     cout<<"    PROGRAM TO SEARCH A RECORD IN A FILE  "<<endl;
     cout<<"\n enter name of the file ";gets(fname);
     cout<<"\n file name is "<<fname;
     finout.open(fname, ios::out|ios::in|ios::binary);
     cout<<"\n\t enter no. of records ";
     cin>>no;
     if(isdigit(no)!=0)
     cout<<"\n\t\tERROR! 101: not int type! ";
     for(int i=0;i<no;i++)
	{
	  stud.getdata();
	  finout.write( (char*)&stud, sizeof(stud) );
	}
	finout.seekp(0);
	int rno;
	char found='n';
	clrscr();
	cout<<"\n\t Enter the roll to be searched ";
	cin>>rno;
     for(i=0;i<no;++i)
	{
	  finout.read( (char*)&stud, sizeof(stud));
	  if(stud.rolln()==rno)
	    {
	     cout<<"\n record found details are ";
	     stud.putdata();
	     found='y';
	     break;
	    }
	}
     if(found=='n')
     cout<<"\n record not found ";
     getch();
}
