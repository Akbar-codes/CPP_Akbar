#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{    clrscr();
	   int gd = DETECT, gm;
	   initgraph(&gd,&gm,"C:\\TurboC++\Disk\TurboC3\INCLUDE");
	   circle(300,300,50);
     getch();
     closegraph();
}