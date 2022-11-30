#include<stdio.h>
#include<conio.h>
void main()
{
int year,day;
clrscr();
 {
	printf("enter days=");
	scanf("%d",&day);
	year=day/365;
	printf("year= %d\n",year);
 }
 {
	printf("enter year=");
	scanf("%d",&year);
	day=year*365;
	printf("day= %d",day);
 }
getch();
}