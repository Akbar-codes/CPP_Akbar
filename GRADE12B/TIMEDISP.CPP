#include<iostream.h>
#include<conio.h>
#include<time.h>
void main()
{
     clrscr();
     time_t t[20];
     int m;
	  cout<<"\n\n\t\t System run-time : ";
	  cout<<"\n\t\t How many times(max 20) ? ";
	  cin>>m;
	  for(int i=0;i<m;++i)
	     {   cout<<"\n"<<t[i]; }
     getch();
}