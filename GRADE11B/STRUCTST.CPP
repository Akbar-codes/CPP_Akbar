#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct db
{      int dd;int mm;int yy;
};
struct student
{      int roll;
       char name[20];
       float marks;
       db db1;
}stud;
void main()
{    clrscr();
	cout<<"\n\n\t\t Enter roll : ";
	  cin>>stud.roll;
	cout<<"\n\t\t Enter name : ";
	  gets(stud.name);
	cout<<"\n\t\t Enter date of birth : ";
	  cin>>stud.db1.dd>>stud.db1.mm>>stud.db1.yy;
	cout<<"\n\t\t Enter marks : ";
	  cin>>stud.marks;
	cout<<"\n\t\t"<<stud.roll<<"\n\t"<<stud.name
	    <<"\n\t"<<stud.db1.dd<<"/"<<stud.db1.mm<<"/"<<stud.db1.yy
	    <<"\n\t"<<stud.marks;
     getch();
}