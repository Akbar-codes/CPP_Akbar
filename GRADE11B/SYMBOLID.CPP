/*         This program accepts any symbol and identifies it, and
    tells us what kind of a symbol it is :- alphabetic, numeric or special. */
#include<iostream.h>
#include<conio.h>
#include<ctype.h>
void main()
{    clrscr();
	char ch;
	   cout<<"\n\n\t\t SYMBOL IDENTIFIER ";
	   cout<<"\n\n\t\t Enter the symbol : ";
	    cin>>ch;
	   if(isalpha(ch))
	     {
	     cout<<"\n\t\t You entered an alphabet. ";
	     if(isupper(ch))
	     cout<<"\n\t\t It is in uppercase. ";
	     else
	     cout<<"\n\t\t It is in lowercase. ";
	     }
	   else if(isdigit(ch))
	     {
	     cout<<"\n\t\t You entered a numeric digit ";
	     }
	   else
	     {
	     cout<<"\n\t\t You entered a special symbol ";
	     }
     getch();
}