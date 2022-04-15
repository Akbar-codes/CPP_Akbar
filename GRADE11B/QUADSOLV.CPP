#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{    clrscr();
	float del,r1,r2,a,b,c;
	cout<<"\n\n\t\t\t QUADRATIC EQUATION SOLVER ";
	cout<<"\n\n\n\t\t Enter a,b,c of "<<" ax^2+bx+c : ";
	  cin>>a>>b>>c;
	if(!a)
	  {
	  cout<<"\n\n\t\t \'a\' cannot be zero!!!!!!!! ";
	  cout<<"\n\t\t ABORTING!!!!!!!!! ";
	  }
	else
	  {
	  del=(b*b)-(4*a*c);
	    if(del>0)
	    {
	    r1=(-b+sqrt(del))/(2*a);
	    r2=(-b-sqrt(del))/(2*a);
	    cout<<"\n\n\t\t Roots are REAL and UNEQUAL. ";
	    cout<<"\n\t\t Root 1 = "<<r1
		<<"\n\t\t Root 2 = "<<r2;
	    }
	    else if(del==0)
	    {
	    r1=(-b)/(2*a);
	    cout<<"\n\n\t\t Roots are REAL and EQUAL. ";
	    cout<<"\n\t\t Root 1 = "<<r1
		<<"\n\t\t Root 2 = "<<r2;
	    }
	    else
	    {
	    cout<<"\n\n\t\t Roots are COMPLEX and IMAGINARY. ";
	    }
	  }
     getch();
}