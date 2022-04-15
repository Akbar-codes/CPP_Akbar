#include<iostream.h>
#include<conio.h>
int i,j,Matrix[4][4];
void UpperHalf(int Mat[4][4]);
void main()
{
     clrscr();
     cout<<"\n\n\t\t\t HALF MATRIX MAKER ";
     cout<<"\n\n\n\t\t Enter the Matrix : ";
     for(i=0;i<4;++i)
	{
	   cout<<"\n row "<<i+1;
	   for(j=0;j<4;++j)
	      {
		 cout<<"\n column "<<j+1;
		 cin>>Matrix[i][j];
	      }
	}
     cout<<"\n\t\t\t Matrix entered is : ";
     for(i=0;i<4;++i)
	{
	   cout<<" ";
	   for(j=0;j<4;++j)
	      {
		 cout<<Matrix[i][j];
	      }
	}
     cout<<"\n\n\t\t The upper half of matrix is :- ";
     UpperHalf(Matrix);
     getch();
}
void UpperHalf(int Mat[4][4])
{
     for(i=0;i<4;++i)
	{
	   cout<<endl;
	   for(j=0;j<4;++j)
	      {
		 if(i<j)
		   {
		      cout<<Mat[i][j];
		   }
	      }
	}
}