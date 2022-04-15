#include<iostream.h>
#include<conio.h>
class ITEM{
		int itcode[5];
		float itprice[5];
	  public:
		void init(void);
		float largest(void);
		float sum(void);
		void dispit(void);
	  };
void ITEM::init(void)
{
     for(int i=0;i<5;i++)
	{
	     cout<<"\n Item no : "<<i+1;
	     cout<<"\n Enter item code : ";
	     cin>>itcode[i];
	     cout<<"\n Enter item price : ";
	     cin>>itprice[i];
	     cout<<"\n"; clrscr();
	}
}
float ITEM::largest(void)
{
     float large = itprice[0];
     for(int i=1;i<5;i++)
	{
	   if(large<itprice[i])
	      large = itprice[i];
	}
     return large;
}
float ITEM::sum(void)
{
     float sum=0;
     for(int i=0;i<5;i++)
	 {
	 sum+=itprice[i];
	 }
     return sum;
}
void ITEM::dispit(void)
{
     cout<<"\n\t\t Code Price ";
     for(int i=0;i<5;i++)
	{
	cout<<" \n\t\t "<<itcode[i];
	cout<<"      "<<itprice[i];
	}
	cout<<"\n";
}
void main()
{
     clrscr();
     ITEM order;
     order.init();
     float total, biggest;
     int ch=0;
     do
     {
       cout<<"\n\t\t\t MAIN MENU \n";
       cout<<"\n\t\t 1) Display largest price. ";
       cout<<"\n\t\t 2) Display sum of prices. ";
       cout<<"\n\t\t 3) Display item list. ";
       cout<<"\n\t\t Enter your choice (1-3): ";
       cin>>ch;  clrscr();
       switch(ch)
	     {
	      case 1 : biggest = order.largest();
		       cout<<"\n\t The Largest price is "<<biggest<<"\n";
		       break;
	      case 2 : total = order.sum();
		       cout<<"\n\t The Sum of prices is "<<total<<"\n";
		       break;
	      case 3 : order.dispit();
		       break;
	      default : cout<<"\t\t\t------------------------------"<<"\n\t\t\t        WRONG CHOICE!!!\n"<<"\t\t\t------------------------------";
			break;
	     }
     }while(ch>=1 && ch<=3);
     getch();
}