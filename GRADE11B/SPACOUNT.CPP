/* 	      This program accepts a string and counts the number
			of spaces in-between characters  		   */
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
     clrscr();
	char str[80];
	int i,count=0;
	   cout<<"\n\n\t\t\t SPACE COUNTER ";
	   cout<<"\n\n\n\t\t Enter any sentence : ";
	    gets(str);
	   for(i=0;str[i]!='\0';i++)
	      {
		 if( str[i] == ' ' )
		 count++;
	      }
	   cout<<"\n\t\t Number of spaces in string are : "<<count;
     getch();
}