#include<iostream.h>
#include<conio.h>
void main()
{    clrscr();
	float p,t,I;
	      cout<<"\n\n\t\t Enter principal amount : ";
		cin>>p;
	      cout<<"\n\t\t time (in years) : ";
		cin>>t;
	if(t<=10)
	   { I=(p*12*t)/100;
	      cout<<"\n\n\t\t Interest @ 12% = "<<I;
	      }
	else
	   { I=(p*8*t)/100;
	      cout<<"\n\n\t\t Interest @ 8% = "<<I;
	      }
     getch();
}