#include<graphics.h>
#include<conio.h>
void main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm,"C;\\TurboC++\\Disk\\TurboC3\\INCLUDE");
	circle(300,300,50);
	closegraph();
	getch();
}