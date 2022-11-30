#include<stdio.h>
#include<conio.h>
void main()
{
int amount;
float rate;
int year;
float x;
clrscr();

printf("enter amount=");
scanf("%d",&amount);

printf("enter rate=");
scanf("%f",&rate);

printf("enter year=");
scanf("%d",&year);

x=(amount*rate*year)/100;
printf("final amount= %f",x);

getch();
}
