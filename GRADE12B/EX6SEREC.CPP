//Prg to search record in file.
//EXPERIMENT -- 6
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class student{
		int roll;
		char name[40];
		char grade;
		float marks;
	     public:
		void get(void);
		void put(void);
		int rolln() {return roll;}
	     };


void student::get(void)
{
   //	char ch;
   //	cin.get(ch);

	cout<<" Enter name  : ";
	cin>>name;
	cout<<" Enter grade : ";  cin>>grade;
	cout<<" Enter marks : ";  cin>>marks;
}


void student::put(void)
{
	cout<<" Name  : "<<name<<"\t\n";
	cout<<" Grade : "<<grade<<"\t\t";
	cout<<" Marks : "<<marks<<"\t\t\t"; cout<<"\n";
}


void main()
{
     clrscr();
     char fname[30];
     student stud;
     int no;
     fstream finout;
     if(!finout)
	{
		cout<<"CANNOT OPEN FILE!!!!!!";
		return;
	}
     cout<<"\n  P R O G R A M   T O   S E A R C H   R E C O R D";
     cout<<" Enter name of the file \n";  gets(fname);
     cout<<"\n file name is "<<fname;
     finout.open(fname,ios::in|ios::out|ios::binary);
     cout<<"\n\t Enter no of records : ";
     cin>>no;
     for(int i=0;i<no;++i)
	{
		stud.get();
		finout.write( (char*) &stud, sizeof(stud) );
	}
     finout.seekp(0);
     int rno;
     char found ='n';
     clrscr();
     cout<<"\n\t Enter the roll to be searched ";
     cin>>rno;
     for(i=0;i<no;i++)
     {
	finout.read( (char*)&stud, sizeof(stud) );
	if(stud.rolln()==rno)
	{
		cout<<"\n record found details are ";
		stud.put();
		found='y';
		break;
	}
     }
     if(found=='n')
     cout<<"\n Record not found";
     getch();
}