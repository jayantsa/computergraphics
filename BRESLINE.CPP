#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 int xa,ya,xb,yb;
 int dx,dy;
 cin>>xa>>ya>>xb>>yb;
 dx=abs(xa-xb);
 dy=abs(ya-yb);
 int inc1=2*dy;
 int inc2=2*(dy-dx);
 int d=2*dy-dx;
 int x,y,xend;
 if(xa>xb)
 {
 x=xb;
 y=yb;
 xend=xa;
 }
 else
 {
 x=xa;
 y=ya;
 xend=xb;
 }
 putpixel(x,y,YELLOW);
 while(x<xend)
 {
 if(d<=0)
 {
 d+=inc1;
 }
 else
 {
 d+=inc2;
 y++;
 }
 x++;
 putpixel(x,y,YELLOW);
 delay(50);
 }
 getch();
 closegraph();
 }
