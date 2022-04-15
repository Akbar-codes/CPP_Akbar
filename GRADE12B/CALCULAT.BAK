#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
#include<process.h>
#define e 2.7182818284590
void calculator(double, double, int);
//void calculator(double, double, char);
void menu();
void intro();
//----------main
void main()
{
	clrscr();
	char c,ch;
	double x,y;
	    do{
		intro();
		menu();
		cout<<"\n\n\n\t\t\t Which to choose? ";cin>>c;
		if(c=='8'||c=='l')
			exit(0);
		cout<<"\n\t\t\t Enter any two numbers: ";cin>>x>>y;
		calculator(x,y,c);
		cout<<"\n\n\n\t\t Want to enter more? (y/n): ";
		cin>>ch;
	      }while( (ch=='y') || (ch=='Y') );
	getch();
}
//--------------calculator integer logic
void calculator(double a, double b, int n)
{
	double ans;
	switch(n)
	{
		case '1' : ans=a+b;
			cout<<"\n\t The sum is: "<<ans;
			break;
		case '2' : ans=a-b;
			cout<<"\n\t The difference is is: "<<ans;
			break;
		case '3' : ans=a*b;
			cout<<"\n\t The product is: "<<ans;
		case '4' : if(b!=0)
				ans=a/b;
			 else
				cout<<"\n\n\t\t ERROR 401: CAN'T "
				    <<" DIVIDE BY ZERO(0)! ";
			 break;
		case '5' : ans=pow(a,b);
			cout<<"\n\t The number "<<a
			    <<" raised to the power "<<b
			    <<" is "<<ans;
			break;
		case '6' : cin.ignore(b);
			ans = log(a);
			cout<<"\n\t The log of "<<a<<" to the base "<<e
			    <<" is "<<ans;
			break;
		case '7' : cin.ignore(b);
			ans = log10(a);
			cout<<"\n\t The log of "<<a<<" to the base "<<10
			    <<" is "<<ans;
			break;
		case '8' :exit(0);
			break;
		case '9' : intro();
			 break;
		case '+' : ans=a+b;
			cout<<"\n\t The sum is: "<<ans;
			break;
		case '-' : ans=a-b;
			cout<<"\n\t The difference is is: "<<ans;
			break;
		case '*' : ans=a*b;
			cout<<"\n\t The product is: "<<ans;
			break;
		case 'x' : ans=a*b;
			cout<<"\n\t The product is: "<<ans;
			break;
		case '/' : if(b!=0)
			     {
				ans=a/b;
				cout<<"\n\t The quotient is: "<<ans;
			     }
			   else
				cout<<"\n\n\t\t ERROR 401: CAN'T "
				    <<" DIVIDE BY ZERO(0)! ";
			   break;
		case '^' : ans=pow(a,b);
			   cout<<"\n\t The number "<<a
			       <<" raised to the power "<<b
			       <<" is "<<ans;
			   break;
		case 'e' : cin.ignore(b);
			   ans = log(a);
			   cout<<"\n\t The log of "<<a<<" to the base "<<e
			       <<" is "<<ans;
			   break;
		case '10' : cin.ignore(b);
			   ans = log10(a);
			   cout<<"\n\t The log of "<<a<<" to the base "<<10
			       <<" is "<<ans;
			   break;
	       case 'l' : exit(0);
			   break;
	       case 'b' :
			   break;
	       default   : cout<<"\n\n\t\t ERROR 405: SELECT VALID CHOICE! ";
			   break;
	}
}
//----------menu display
void menu()
{
	clrscr();
	cout<<"\n\t\t\t Hello User! ";
	cout<<"\n\n\t\t OPERATIONS ";
	cout<<"\n\t 1. Add + ";
	cout<<"\n\t 2. Subtract - ";
	cout<<"\n\t 3. Multiply *|x ";
	cout<<"\n\t 4. Divide / ";
	cout<<"\n\t 5. Exponent and Power ^ ";
	cout<<"\n\t 6. Logarithm (Natural) e ";
	cout<<"\n\t 7. Logarithm (Base 10) 10 ";
	cout<<"\n\t 8. Exit l ";
	cout<<"\n\t 9. Return| <-Go Back b";
	getch();
	clrscr();
}
//----------intro
void intro()
{
	clrscr();
	cout<<"\n\n\n\t\t\t --------------";
	cout<<"\n\t\t\t | CALCULATOR |";
	cout<<"\n\t\t\t --------------";
	cout<<"\n\t\t\t ---------------------------";
	cout<<"\n\n\n\t\t\t | Press ENTER to continue | ";
	cout<<"\n\t\t\t ---------------------------";
	getch();
	clrscr();
}