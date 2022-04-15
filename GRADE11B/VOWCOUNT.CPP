#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{    clrscr();
	char string[100];
	int count=0;
	char ch;
	cout<<"\n\n\t\t\t Enter the sentence : ";
	  gets(string);
	cout<<"\n\t\t\t The entered line is : ";
	  puts(string);
	for(int i=0;string[i]!='\0';++i)
	  {  ch = string[i];
	     if( toupper(ch));
	      if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	       count++;
	  }
	cout<<"\n\n\t\t\t The number of vowels are : "<<count;
     getch();
}