#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
void circular(int h,int k,int rx,int ry,int s,int e)
{
	float angle=((s<=e)?s:e)*((M_PI)/180);
	float range=((e>s)?e:s)*((M_PI)/180);

	float x=rx*cos(angle);
	float y=ry*sin(angle);

	do{
	putpixel((int)(h+x+0.5),(int)(k-y+0.5),RED);
	angle+=0.01;
	x=rx*cos(angle);
	y=ry*sin(angle);

	}while(angle<=range);
}
void main()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 // line(200,200,400,400);
  circular(200,200,50,20,6,360);
  getch();
  closegraph();
}