#include<iostream.h>
#include<conio.h>
long fact(long);
void main()
{    clrscr();
	long n,y;
	   cout<<"\n\n\t\t\t FACTORIAL CALCULATOR ";
	   cout<<"\n\n\n\t\t Enter the number : ";
	    cin>>n;
	   fact(n);
	   cout<<"\n\t\t The factorial of "<<n<<" is : "<<fact(n);
     getch();
}
long fact(long n)
{
    long f=1,i;
    for(i=1;i<=n;++i)
    f=f*i;
    return(f);
}