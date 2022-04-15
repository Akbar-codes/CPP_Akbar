/*        This program accepts the number of terms and displays the
			       Fibonacci series                             */
#include<iostream.h>
#include<conio.h>
void main()
{    clrscr();
	unsigned long fir,sec,thi,n,i;
	   fir = 0;
	   sec = 1;
	   cout<<"\n\n\t\t How many elements ? ";
	    cin>>n;
	   cout<<"\n\t\t The Fibonacii Series : ";
	   cout<<fir<<" "<<sec;
	   for(i=2;i<n;++i)
	   {
		thi=fir+sec;
		cout<<" "<<thi;
		fir=sec;
		sec=thi;
	   }
     getch();
}