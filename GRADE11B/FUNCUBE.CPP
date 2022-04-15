/*  	This program accepts any number and calculates its cube. 	   */
#include<iostream.h>
#include<conio.h>
float cube(float);// Function to calculate cube of entered number.
void main()
{    clrscr();
	float a;
	   cout<<"\n\n\t\t\t\t CUBE FINDER ";
	   cout<<"\n\n\n\t\t\t Enter the number : ";
	    cin>>a;
	   cout<<"\n\n\t\t\t The cube of "<<a<<" is "<<cube(a)<<". ";
     getch();
}
float cube( float x)
{
     float z;
     z=x*x*x;
     return(z);
}
