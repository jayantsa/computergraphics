#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
void circlepoint(int xc,int yc,int x,int y)
{
	putpixel(xc+x,yc+y,GREEN);
	putpixel(xc+y,yc+x,GREEN);
	putpixel(xc+y,yc-x,GREEN);
	putpixel(xc-x,yc+y,GREEN);
	putpixel(xc-y,yc+x,GREEN);
	putpixel(xc-y,yc-x,GREEN);
	putpixel(xc-x,yc-y,GREEN);
	putpixel(xc+x,yc-y,GREEN);
}
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
int xc,yc;
cin>>xc>>yc;
int r;
cin>>r;
int x=0,y=r;
int d=1-r;
circlepoint(xc,yc,x,y);
while(x<y)
{
if(d<0)
{ d=d+2*x+1;
}
else
{
d=d+2*(x-y)+1;
y--;
}
x++;
circlepoint(xc,yc,x,y);
delay(50);
}
getch();
closegraph();
}
