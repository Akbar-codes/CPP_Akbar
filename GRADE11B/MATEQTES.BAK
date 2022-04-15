#include<iostream.h>
#include<conio.h>
void main()
{    clrscr();
	int a[3][3],b[3][3],r,c;
	cout<<"\n\n\t\t\t MATRICES EQUALITY TESTER ";
	cout<<"\n\n\t\t Enter first matrix row-wise : ";
	  for(r=0;r<3;++r)
	  {
	     for(c=0;c<3;++c)
	      { cin>>a[r][c];
	      }
	  }
	  cout<<"\n\t\t Enter the next matrix : ";
	  for(r=0;r<3;++r)
	  {
	     for(c=0;c<3;++c)
	      { cin>>b[r][c];
	      }
	  }
	int flag=0;
	for(r=0;r<3;++r)
	  {
	     for(c=0;c<3;++c)
	      {   if(a[r][c]!=b[r][c])
		   {
		     flag=1;break;
		   }
	      }
	     if(flag==1)break;
	  }
	  if(flag!=0)
	cout<<"\t\t Matrices are not equal. ";
	  else
	cout<<"\t\t Matrices are equal. ";
     getch();
}