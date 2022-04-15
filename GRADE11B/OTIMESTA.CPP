#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
     clrscr();
     randomize();
     int i,randnum;
     unsigned int seedval;
     time_t t;
     seedval = (unsigned)time(&t);
     srand(seedval);
     for(i = 0;i < 5;++i)
	cout<<t<<endl;
     getch();
}