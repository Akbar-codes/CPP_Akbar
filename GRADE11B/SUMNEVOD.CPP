/*       This program accepts a list of numbers, checks each number
     if it's negative, positive odd or positive even and prints their
				respective sums.                            */
#include<iostream.h>
#include<conio.h>
void main()
{    clrscr();
	int num, sumneg, sumeven, sumodd;
	   sumneg=sumeven=sumodd=0;
	char ch;
	   do        //loop to test each number.
	   {   cout<<"\n\n\t\t Enter the number : ";
		cin>>num;
	       if(num < 0)     // sum for negative numbers.
		  sumneg += num;
	       else if(num % 2 == 0) // sum for positive even numbers.
		       sumeven += num;
	       else             // sum for positive odd numbers.
		   sumodd += num;
	       cout<<"\n\t\t Want to enter more ? ";
		cin>>ch; // choice to enter more numbers.
	   }while(ch=='y'||ch=='Y');
	   cout<<"\n\t\t The sum of negative numbers is "<<sumneg<<" . ";
	   cout<<"\n\t\t The sum of positive even numbers is "<<sumeven<<" . ";
	   cout<<"\n\t\t The sum of positive odd numbers is "<<sumodd<<" . ";
     getch();
}