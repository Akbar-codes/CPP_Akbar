/*     This program accepts two numbers for two values for two
      variables and swaps their values by call-by-value(original
			     values are copied).                          */
#include<iostream.h>
#include<conio.h>
void main()
{
     clrscr();
	void swap(int ,int );
	int a,b;
	   a=7;
	   b=4;
	   cout<<"\n\t\t The original values are : ";
	   cout<<"\n\t\t a = "<<a<<",b = "<<b;
	   swap(a,b);
	   cout<<"\n\t\t Values after swap are : ";
	   cout<<"\n\t\t a = "<<a<<",b = "<<b;
     getch();
}
void swap( int x, int y)
{
    int temp;
	 temp=x;
	 x=y;
	 y=temp;
	 cout<<"\n\t\t The values after swapping are : ";
	 cout<<"\n\t\t a = "<<x<<",b = "<<y;
}