#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class BILL{  long Bill_No;
	     int Bill_period;
	     int No_of_calls;
	     char Payment_mode[20];
	     float Amount;
	     void Calculate_Bill()
	     {	  if(No_of_calls<500)
		     Amount=No_of_calls*1;
		  else if(No_of_calls<=1200)
		     Amount=No_of_calls*2;
		  else
		     Amount=No_of_calls*4;
		  if(strcmpi(Payment_mode,"online")==0)
		     Amount=(0.95*Amount);
	     }
	  public:
	  void New_Bill()
	  {
	       cout<<"\n\n\n\t\t\t BILL ENTRY "<<endl;
	       cout<<"\n\n\t\t Enter bill no. : ";
	       cin>>Bill_No;
	       cout<<"\n\t\t Enter no. of months : ";
	       cin>>Bill_period;
	       cout<<"\n\t\t Enter no. of calls : ";
	       cin>>No_of_calls;
	       cout<<"\n\t\t Enter payment mode(online/offline): ";
	       gets(Payment_mode);
	       Calculate_Bill();
	  }
	  void Print_Bill()
	  {
	       cout<<"\n\n\n\t\t\t BILLING NUMBER : "<<Bill_No;
	       cout<<"\n\t\t\t BILL PERIOD : "<<Bill_period;
	       cout<<"\n\t\t\t NUMBER OF CALLS : "<<No_of_calls;
	       cout<<"\n\t\t\t PAYMENT MODE USED : "<<Payment_mode;
	       cout<<"\n\t\t\t AMOUNT : "<<Amount;
	  }
	  };
void main()
{
     clrscr();
     BILL b;
     cout<<"\n\n\n\t PROGRAM USING CLASSES AND OBJECTS ";
     b.New_Bill();
     b.Print_Bill();
     getch();
}