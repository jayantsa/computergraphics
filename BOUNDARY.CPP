#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
void bfill(int x,int y,int fill,int bound)
{
	int current=getpixel(x,y);
	if(current!=bound&&current!=fill)
	{
		putpixel(x,y,fill);
		delay(50);
		bfill(x+1,y,fill,bound);
		bfill(x-1,y,fill,bound);
		bfill(x,y-1,fill,bound);
		bfill(x,y+1,fill,bound);
	}
	else
	{
	return;
	}
}
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setcolor(RED);
line(50,50,100,50);
line(100,50,100,100);
line(100,100,50,100);
line(50,100,50,50);
int x=75;
int y=75;
bfill(x,y,GREEN,RED);
getch();
closegraph();
return 0;
}