#include<iostream.h>
#include<conio.h>
void main()
{    clrscr();
	float a,b;
	char ch,ch1;
	     cout<<"\n\n\t\t\t\t 3-FUNCTION CALCULATOR ";
	do
	{     cout<<"\n\n\n\n\t\t Enter any two numbers : ";
	       cin>>a>>b;
	      cout<<"\n\n\t\t Enter operator : ";
		cin>>ch;
	if(ch=='+')
	     cout<<"\n\n\t\t Sum = "<<a+b;
	else if(ch=='-')
	     cout<<"\n\n\t\t Difference = "<<a-b;
	else if(ch=='/')
	    {if(b==0)
	     cout<<"\n\n\t\t Cannot divide by zero!! ";
	     else
	     cout<<"\n\n\t\t Quotient = "<<a/b;}
	else cout<<"\n\n\t\t Wrong operator. ";
	cout<<"\n\n\t\t Want to enter more ? ";
	  cin>>ch1;
	}while(ch1=='y'||ch1=='Y');
     getch();
}