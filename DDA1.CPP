#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
#define round(a) ((int)(a+0.5))
int max(int a,int b)
{
return a>b?a:b;
}

void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
int xa,xb,ya,yb,dx,dy,steps;
float xinc,yinc,x,y;
cin>>xa>>ya>>xb>>yb;
dx=xb-xa;
dy=yb-ya;
steps=max(abs(dx),abs(dy));
xinc=dx/(float)steps;
yinc=dy/(float)steps;
x=xa;
y=ya;
putpixel(round(x),round(y),RED);
for(int k=0;k<steps;k++)
{
x+=xinc;
y+=yinc;
putpixel(round(x),round(y),RED);
delay(50);
}
getch();
closegraph();
}