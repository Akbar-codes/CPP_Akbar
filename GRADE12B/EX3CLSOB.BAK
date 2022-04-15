//Prg using classes and objects.
//EXPERIMENT -- 3
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class BILL{
	   long bno;
	   int bper;
	   int no;
	   char paymo[20];
	   float amt;
	   void calc_bill()
	   {
		if(no<500)
			amt=no*1;
		else if(no<=1200)
			amt=no*2;
		else
			amt=no*4;
		if(strcmpi(paymo,"online")==0)
			amt*=0.95;
	   }
	   public:
	   void new_bill()
	   {
		cout<<"\n\n\n\t\t\t BILL ENTRY "<<endl;
		cout<<"\n\n\t\t Enter Bill no. : ";
		cin>>bno;
		cout<<"\n\t\t Enter no. of months : ";
		cin>>bper;
		cout<<"\n\t\t Enter no. of calls : ";
		cin>>no;
		cout<<"\n\t\t Enter payment mode (online/offline) : ";
		gets(paymo);
		calc_bill();
	   }
	   void print_bill()
	   {
		cout<<"\n\n\n\t\t\t BILLING NUMBER : "<<bno;
		cout<<"\n\t\t\t BILL PERIOD : "<<bper;
		cout<<"\n\t\t\t NUMBER OF CALLS MADE : "<<no;
		cout<<"\n\t\t\t PAYMENT MODE USED : "<<paymo;
		cout<<"\n\t\t\t AMOUNT : "<<amt;
	   }
	};
void main()
{
     clrscr();
     BILL b;
     cout<<"\n\n\t\t PROGRAM USING CLASSES AND OBJECTS ";
     b.new_bill();
     b.print_bill();
     getch();
}