#include<iostream.h>
#include<conio.h>
void main()
{    clrscr();
	int matrix1[10][10], matrix2[10][10],i,j,r1,c1,r2,c2;
	cout<<"\n\t\t For matrix 1 ";
	cout<<"\n\t\t Enter no. of rows and columns : ";
	  cin>>r1>>c1;
	cout<<"\n\t\t For matrix 2 ";
	cout<<"\n\t\t Enter no. of rows and columns : ";
	  cin>>r2>>c2;
	if(r1==r2&&c1==c2)
	  {  cout<<"\n\t The sum can be calculated. ";
	  }
	else
	{    cout<<"\n\t The sum cannot be calculated. ";
	     goto end;
	}
	cout<<"\n\t\t MATRIX 1 ";
	for(i=0;i<r1;++i)
	   {    cout<<"\n row "<<i+1<<" : "<<endl;
		for(j=0;j<c1;++j)
		   {    cout<<"\n element "<<j+1<<" : ";
			  cin>>matrix1[i][j];
		   }
	   }
	cout<<"\n\t\t MATRIX 2 ";
	for(i=0;i<r2;++i)
	   {    cout<<"\n row "<<i+1<<" : "<<endl;
		for(j=0;j<c2;++j)
		   {    cout<<"\n element "<<j+1<<" : ";
			  cin>>matrix2[i][j];
		   }
	   }
	cout<<"\n matrix 1 ";
	for(i=0;i<r1;++i)
	   {    cout<<endl;
		for(j=0;j<c2;++j)
		   {    cout<<matrix1[i][j]<<" ";
		   }
	   }
	cout<<"\n matrix 2 ";
	for(i=0;i<r2;++i)
	   {    cout<<endl;
		for(j=0;j<c2;++j)
		   {    cout<<matrix2[i][j]<<" ";
		   }
	   }
	int matrix3[10][10];
	for(i=0;i<r1;++i)
	   {    cout<<endl;
		for(j=0;j<c1;++j)
		   {    matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
		   }
	   }
	cout<<"\n Sum of matrices is ";
	for(i=0;i<r1;++i)
	   {    cout<<endl;
		for(j=0;j<c1;++j)
		   {    cout<<matrix3[i][j]<<" ";
		   }
	   }
     getch();
   end:
}