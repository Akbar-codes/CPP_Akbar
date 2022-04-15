/*     This program accepts the year in four-digit format and displays
		    whether it is a leap year or not.                       */
#include<iostream.h>
#include<conio.h>
void main()
{
     clrscr();
	int yr;
	   cout<<"\n\n\t\t\t LEAP YEAR TESTER ";
	   cout<<"\n\n\t\t Enter year : ";
	    cin>>yr;
	   if(yr%100==0) // two conditions test the number if it's leap
	     {
		if(yr%400==0)
		   cout<<"\n\t\t Year is Leap Year. ";
	     }
	   else if(yr%4==0)
		   cout<<"\n\t\t Year is Leap Year. ";
	   else
	      cout<<"\n\t\t Year is not a Leap Year. ";
     getch();
}