/* 	This program accepts any character in UPPERCASE and displays
			whether it is a vowel or not.			    */
#include<iostream.h>
#include<conio.h>
#include<ctype.h>
void main()
{
     clrscr();
	char ch;
	   cout<<"\n\n\t\t\t VOWEL IDENTIFIER ";
	   cout<<"\n\n\n\n\t\t Enter any alphabet (UPPER CASE ONLY) : ";
	    cin>>ch;
	   if( isupper(ch) ) // function to read uppercase letters only.
	      if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		 cout<<"\n\n\t\t Alphabet is a vowel. "; // all five vowels.
	      else
		 cout<<"\n\n\t\t Alphabet is a consonant. ";
	   else
		 cout<<"\n\n\t\t Alphabet's not uppercase!! ";
     getch();
}