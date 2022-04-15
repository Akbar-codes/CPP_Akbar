/* 	    This program is a MENU-based program to accept two
     numbers and depending on user's choice, print either sum,difference,
			      product,quotient.				   */
#include<iostream.h>
#include<conio.h>
void main()
{
     clrscr();
	float a,b;
	char ch,ch1;
	   cout<<"\n\n\t\t\t 3-FUNCTION CALCULATOR ";
	   do
	   {
		 cout<<"\n\n\t\t Enter any two numbers : ";
		  cin>>a>>b;
		 cout<<"\n\t\t Enter operator : ";
		  cin>>ch;
		 switch(ch)
		       {
			  case '+' : cout<<"\n\n\t\t Sum is "<<a+b;
				     break;
			  case '-' : cout<<"\n\n\t\t Difference is "<<a-b;
				     break;
			  case '*' : cout<<"\n\n\t\t Product is "<<a*b;
				     break;
			  case '/' : if( b==0 )
				       cout<<"\n\n\t\t ERROR!! : Can't divide by zero. ";
				     else
				       cout<<"\n\n\t\t Quotient is "<<a/b;
				     break;
			  default  : cout<<"\n\n\t\t ERROR!! : Enter valid operator.";
		       }
		 cout<<"\n\n\t\t Wanna enter more(y/n) ? ";
		  cin>>ch1;
	   }while(ch1=='y'||ch1=='Y');
     getch();
}