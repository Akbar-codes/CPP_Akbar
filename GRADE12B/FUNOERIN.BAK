#include<iostream.h>
#include<conio.h>
float p,r;int t;
void amt(float p, int t, float r)      //#1
{  cout<<"\n Principal Amount : "<<p;
   cout<<"\t Time : "<<t<<" years";
   cout<<"\t Rate : "<<r;
   cout<<"\n Interest Amount : "<<(p*r*t)<<"\n";
}
void amt(float p, int t)               //#2
{  cout<<"\n Principal Amount : "<<p;
   cout<<"\t Time : "<<t<<" years";
   cout<<"\t Rate : 0.08";
   cout<<"\n Interest Amount : "<<(p*0.08*t)<<"\n";
}
void amt(float p, float r)      //#3
{  cout<<"\n Principal Amount : "<<p;
   cout<<"\t Time : 2 years";
   cout<<"\t Rate : "<<r;
   cout<<"\n Interest Amount : "<<(p*r*2)<<"\n";
}
void amt(int t, float r)      //#4
{  cout<<"\n Principal Amount : 2000";
   cout<<"\t Time : "<<t<<" years";
   cout<<"\t Rate : "<<r;
   cout<<"\n Interest Amount : "<<(2000*r*t)<<"\n";
}
void amt(float p)      //#5
{  cout<<"\n Principal Amount : "<<p;
   cout<<"\t Time : 2 years";
   cout<<"\t Rate : 0.08";
   cout<<"\n Interest Amount : "<<(p*0.08*2)<<"\n";
}
void main()
{
     clrscr();
     cout<<"\n\n\t\tFUNCTION OVERLOADING INTEREST CALCULATOR";
     cout<<"\n\n\n\t CASE 1 ";
	amt(2000.0F);
     cout<<"\n\t CASE 2 ";
	amt(2500.0F,3);
     cout<<"\n\t CASE 3 ";
	amt(2300.0F,3,0.11F);
     cout<<"\n\t CASE 4 ";
	amt(2,0.12F);
     cout<<"\n\t CASE 5 ";

	amt(6,0.07F);
     getch();
}