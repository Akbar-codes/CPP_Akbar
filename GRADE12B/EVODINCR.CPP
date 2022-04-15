/*            This is a program that uses a function definition
			    Evenodd(int T[],int c)
	     to add 1 to odd values and add 2 to all even values
				 an array T.                                */
#include<iostream.h>
#include<conio.h>
void Evenodd(int T[], int c);
int i=0;      // Global variable now, and initialised.
void main()
{
     clrscr();
     int t[20],n;
     cout<<"\n\n\t\t\t EVEN-ODD INCREMENTER ";
     cout<<"\n\n\n\t\t Enter list size (max 20) : ";
     cin>>n;
     cout<<"\n\t\t Enter list elements : ";
     for(;i<n;++i)                    // intialisation skipped.
	{
	  cout<<"\n\t element "<<i+1<<" : ";
	  cin>>t[i];
	}
     cout<<"\n\t\t The entered list is : ";
     for(;i<n;++i)                    // intialisation skipped.
	{
	  cout<<"\n\t "<<i+1<<") "<<t[i];
	}
     Evenodd(t,n);
     getch();
}
void Evenodd(int T[],int c)
{
     for(;i<c;++i)
	{
	  if((i%2)==0)
	    T[i]+=2;
	  else
	    T[i]++;
	}
     cout<<"\n\t\t The updated list of elements is : ";
     for(;i<c;++i)
	{
	  cout<<"\n\t"<<i+1<<") "<<T[i];
	}
}