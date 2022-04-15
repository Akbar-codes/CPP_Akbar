/*       This program accepts a number and checks whether it is
    palindrome or not. Palindrome is a number whose reverse is equal to
				original number.                           */
#include<iostream.h>
#include<conio.h>
void main()
{    clrscr();
	int n, num, digit, rev=0;
	    cout<<"\n\n\t\t Input the number : ";
	     cin>>num;
	    n=num;    // originally entered number stored in 'n'.
	    do
	    {
		digit =  num%10;
		rev = (rev*10)+digit;
		num = num/10;
	    }while(num!=0);
	    cout<<"\n\n\t\t The reverse of the number is : "<<rev;
	    if(n==rev)
	       cout<<"\n\n\t\t The number is palindrome. ";
	    else
	       cout<<"\n\n\t\t The number is not palindrome. ";
     getch();
}