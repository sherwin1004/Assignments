#include<stdio.h>
#include<conio.h>
void main()
{
float PI=3.14;
int r=2, base=2;
float height=1.2;
int length=10, width=20, x;
clrscr();

printf("area of circle=");
x=PI*r*r;
printf("%d\n",x);

printf("area of rectangle=");
x=length*width;
printf("%d\n",x);

printf ("area of triangle=");
x=0.5*base*height;
printf("%d\n",x);

getch();
}