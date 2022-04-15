#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct student
{   int roll; char name[20]; float marks [3]; float per [3];
}stud[4];
void main()
{    clrscr();
	char grade[2];
	 cout<<"\n\n\n\t\t\t STUDENT DETAILS ";
	for(int j=0;j<4;++j)
	{       float total=0;
		cout<<"\n\n\t\t DEATAILS OF STUDENT "<<j+1;
		cout<<"\n\n\t\t Enter roll : ";
		  cin>>stud[j].roll;
		cout<<"\n\t\t Enter name : ";
		  cin>>stud[j].name;
		for(int i=0;i<3;++i)
		{   cout<<"\n\t\t Enter marks of subject "<<i+1<<" : ";
		      cin>>stud[j].marks[i]; total+=stud[j].marks[i];
		}
	if((total/3)>=70)
	    grade[j]='A';
	else if((total/3)>=50)
	    grade[j]='B';
	else
	    grade[j]='C';
	}
	cout<<"\n\n\t\t STUDENT DETAILS "<<endl;
	cout<<"ROLL NO. \t NAME \tMARKS \t\t GRADE "<<endl;
	for(j=0;j<4;++j)
	{	cout<<stud[j].roll<<"\t\t";
		cout<<stud[j].name<<"\t";
		for(int i=0;i<3;++i)
		{   cout<<" "<<stud[j].marks[i];
		}
	cout<<"\t";
	cout<<grade[j];
	cout<<endl;
	}
     getch();
}
