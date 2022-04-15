/*             This program accepts an array of numbers of any
	   specific size, and finds the biggest element among them.         */
#include<iostream.h>
#include<conio.h>
int big(int [],int);  //function declaration.
void main()
{
     clrscr();
	int ar[40],i,n,mx;
	   cout<<"\n\n\n\t\t\t LARGEST ELEMENT FINDER ";
	   cout<<"\n\n\t\t Enter the array size : ";
	    cin>>n;
	   cout<<"\n\t\t Enter the elements of array : ";
	   for(i=0;i<n;++i)
	       cin>>ar[i];
	   mx=big(ar,n);
	   cout<<"\n\n\t\t The largest element of array is : "<<mx;
     getch();
}
int big(int b[],int n)
{
    int max,i;
	max=b[0];
	for(i=0;i<n;++i)
	   {
	       if(max<b[i])
		  max=b[i];
	   }
    return max;
}