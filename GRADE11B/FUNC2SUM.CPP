#include<iostream.h>
#include<conio.h>
void sum(int a,int b);// function prototype
void main()
{    clrscr();
	int a,b;   // a=3,b=5
	    cout<<"\n\t\t\t Enter any two numbers : ";
	      cin>>a>>b;
     sum(a,b);     // calling of functions
     getch();
}
void sum(int a,int b) // function definition
{           cout<<"\n\t\t\t Sum of "<<a<<" and "<<b<<" = "<<a+b;
}
