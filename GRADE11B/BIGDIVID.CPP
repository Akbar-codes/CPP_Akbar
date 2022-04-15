/*    This is a program that accepts 2 numbers and whichever is greater
   will be dividend and other will be divisor and evaluates quotient and
				 remainder.                                */
#include<iostream.h>
#include<conio.h>
void main()
{
     clrscr();
	int a,b,Q,R,q,r;
	   cout<<"\n\n\t\t\t GREATEST NUMERATOR DIVIDER ";
	   cout<<"\n\n\n\t\t Enter any two numbers ";
	    cin>>a>>b;
	   cout<<"\n\t\t Whichever is greater will automatically "
	       <<" be the dividend. ";
	   if(a>b)      // If first is greater than the second,
	     {
		q=a/b;
		r=a%b;
		cout<<"\n\n\t\t\t Quotient is "<<q<<". ";
		cout<<"\n\t\t\t Remainder is "<<r<<". ";
	     }
	   else         // otherwise second is greater than first.
	     {
		Q=b/a;
		R=b%a;
		cout<<"\n\n\t\t\t Quotient is "<<Q<<". ";
		cout<<"\n\t\t\t Remainder is "<<R<<". ";
	     }
     getch();
}