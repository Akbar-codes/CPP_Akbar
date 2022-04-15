#include<string.h>
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
class student{
		char name[40];
		char grade;
		float marks;
	     public:
		void get(void);
		void dis(void);
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


void student::dis(void)
{
	cout<<" Name  : "<<name<<"\t\n";
	cout<<" Grade : "<<grade<<"\t\t";
	cout<<" Marks : "<<marks<<"\t\t\t"; cout<<"\n";
}


void main()
{
     clrscr();
     student arts[3];
     fstream finout;
     finout.open("stu.dat",ios::in|ios::out|ios::binary);
     if(!finout)
	{
		cout<<"CANNOT OPEN FILE!!!!!!";
		return;
	}
     cout<<" Enter details of 3 students \n";
     for(int i=0;i<3;++i)
	{
		arts[i].get();
		finout.write( (char*) &arts[i], sizeof(arts[i]) );
	}
     finout.seekg(0);
     cout<<" The contents of stu.dat are : \n";
     for(i=0;i<3;i++)
	{
		finout.read( (char*) &arts[i], sizeof(arts[i]) );
		arts[i].dis();
	}
     finout.close();
     getch();
}