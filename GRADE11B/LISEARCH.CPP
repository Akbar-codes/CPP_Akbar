/* 	     This program accepts a string of elements, and then a
	specific element is searched for, if found then its position is
		       displayed else it is absent. 			    */
#include<iostream.h>
#include<conio.h>
void main()
{
     clrscr();
	int str[30],size,flag=0,num,pos;
	   cout<<"\n\n\t\t\t ELEMENT SEARCH ";
	   cout<<"\n\n\n\t\t Enter the number of elements : ";
	    cin>>size;     // number of elements.
	   cout<<"\n\t\t Enter the elements of array : ";//the values of
	   for(int i=0;i<size;++i) //loopto enter each element. //elements.
	    cin>>str[i];
	   cout<<"\n\t\t Enter the element to search : ";
	    cin>>num;
	   for(i=0;i<size;++i) //loop to check each element.
	    if(str[i]==num)
	      {
		flag=1;
		pos=i+1;
		break;    //loop terminates.
	      }
	   if(flag==0)
	      cout<<"\n\n\t\t Element not found!! ";
	   else
	      cout<<"\n\n\t\t Element found at "<<pos<<" position. ";
     getch();
}