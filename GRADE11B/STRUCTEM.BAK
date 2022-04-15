#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct db
{      int dd;int mm; int yy;};
struct emp
{      int empno;
       char name[20];
       int sal;
       db db1;//another structure db.
}em[2];
void main()
{    clrscr();
     cout<<"\n\t\t\t EMPLOYEE DETAILS ";
    for(int j=0;j<2;++j)
   { cout<<"\n\n\t\t Enter employee number : ";
       cin>>em[j].empno;
     cout<<"\n\t\t Enter DOB : ";
       cin>>em[j].db1.dd>>em[j].db1.mm>>em[j].db1.yy;
     cout<<"\n\t\t Enter name : ";
       gets(em[j].name);
     cout<<"\n\t\t Enter salary : ";
       cin>>em[j].sal;}
     cout<<"\n\t EMPNO.\t DOB\t\t NAME\t\t  SALARY ";
     for(j=0;j<2;++j)
     cout<<"\n\t   "<<em[j].empno
	 <<"\t"
	 <<em[j].db1.dd
	 <<"/"
	 <<em[j].db1.mm
	 <<"/"
	 <<em[j].db1.yy
	 <<"\t"
	 <<em[j].name
	 <<"\t\t   "
	 <<em[j].sal
	 <<endl;
     getch();
}