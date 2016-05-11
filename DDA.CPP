#include<stdlib.h>
#include<iostream.h>
#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<conio.h>

# define round(val) (int)(val+0.5)

int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm);
void line_dda(int,int,int,int);
int xa,xb,ya,yb;
printf("Enter two coordinates\n");
scanf("%d %d",&xa,&ya);
scanf("%d %d",&xb,&yb);
line_dda(xa,ya,xb,yb);
getch();
closegraph();
return 0;
}

void line_dda(int xa,int ya,int xb, int yb)
{
 int Dx=xb-xa,Dy=yb-ya,steps,k;
 float xin,yin,X=xa,Y=ya;
 if(abs(Dx)>abs(Dy))
 {
 steps=abs(Dx);
 }
 else
 {
 steps=abs(Dy);
 }
 xin=Dx/(float)steps;
 yin=Dy/(float)steps;
 putpixel(round(X),round(Y),6);
 for(k=0;k<steps;k++)
 {
 X=X+xin;
 Y=Y+yin;
 putpixel(round(X),round(Y),WHITE);
 delay(50);
 }
 }