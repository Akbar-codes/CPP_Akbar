/* 	This program inputs the temperature in celsius or farenheit
      and prints the temperature in farenheit or celsius respectively. */
#include<iostream.h>
#include<conio.h>
float c,f;// Global scope for c and f.
void change(int);// Function prototype to change temperature units.
void main()
{
     clrscr();
	int n;
	   cout<<"\n\n\t\t\t C-F CONVERTER ";
	   cout<<"\n\t\t 1) Celsius to Farenheit ";
	   cout<<"\n\t\t 2) Farenheit to Celsius ";
	   cout<<"\n\n\n\t\t Enter your choice : ";
	    cin>>n;
	   if(n==1)
	     {
	     cout<<"\n\n\t\t Enter temperature in Celsius : ";
	      cin>>c;
		 f=(1.8*c)+32;
	     cout<<"\n\t\t Temperature in Farenheit : "<<f;
	     }
	   else if(n==2)
	     {
	     cout<<"\n\n\t\t Enter temperature in Farenheit : ";
	      cin>>f;
		 c=0.55*(f-32);
	     cout<<"\n\t\t Temperature in Farenheit : "<<c;
	     }
	   else
	     {
	     cout<<"\n\t\t Enter proper choice(1/2) ";
	     }
     getch();
}
void change(int x)
{     float a;
      switch(x)
	    {
	      case 1 : cout<<"\n\n\t\t Enter temperature in Celsius : ";
			cin>>c;
			f=(1.8*c)+32;
		       cout<<"\n\t\t Temperature in Farenheit : "<<f;
		       break;
	      case 2 : cout<<"\n\n\t\t Enter temperature in Farenheit : ";
			cin>>f;
			c=0.55*(f-32);
		       cout<<"\n\t\t Temperature in Farenheit : "<<c;
		       break;
	      default : cout<<"\n\t\t Enter proper choice(1/2) ";
			break;
	    }
}