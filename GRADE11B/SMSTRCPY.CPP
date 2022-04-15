/* 		This program accepts two strings and then the
    smaller string gets copied into bigger string. If both strings are
			  equal, no copying occurs.                         */
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{    clrscr();
	char stat[41], state[41];
	int i,j;
	   cout<<"\n\n\t\t\t SMALL SENTENCE COPIER ";
	   cout<<"\n\t\t Enter first sentence : ";
	    gets(stat);
	   cout<<"\n\t\t Enter second sentence : ";
	    gets(state);
	   if(strlen(stat) > strlen(state))
	     {
		strcpy(stat,state);
		cout<<stat<<"\n"<<state;
	     }
	   else if(strlen(state) > strlen(stat))
		  {
			strcpy(state,stat);
			cout<<state<<"\n"<<stat;
		  }
	   else if(strlen(state)==strlen(stat))
		  {
			cout<<"\n\t\t Both sentences are equal. ";
			cout<<"\n\t\t First sentence is : ";
			 puts(stat);
			cout<<"\n\t\t Second sentence is : ";
			 puts(state);
		  }
     getch();
}