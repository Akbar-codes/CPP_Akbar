#include<iostream.h>
#include<conio.h>
void sum(int ar[10][10], int, int);
void main()
{    clrscr();
	int ar[10][10],row,column;
	cout<<"\n\n\t\t ROW SUM ";
	cout<<"\n\t Enter no. of rows : ";
	  cin>>row;
	cout<<"\n\t Enter no. of columns : ";
	  cin>>column;
	for(int i=0;i<row;++i)
	   {    cout<<"\n row "<<i+1;
		for(int j=0;j<column;++j)
		{       cout<<" element "<<j+1<<" : ";
			  cin>>ar[i][j];
		}
	   }
	sum(ar,row,column);
     getch();
}
void sum(int ar[10][10], int r, int c)
{    int rowsum[10];
	 for(int i=0;i<r;++i)
	   {    int total=0;
		for(int j=0;j<c;++j)
		{         total+=ar[i][j];
		}
		rowsum[i]=total;
	   }
	 for(i=0;i<r;++i)
	   {    cout<<"\n Sum of row "<<i+1<<" is "<<rowsum[i];

	   }
}