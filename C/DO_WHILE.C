#include<stdio.h>
#include<conio.h>
void main()
{
int a,i=0;
clrscr();

printf("enter a-");
scanf("%d",&a);

do
	{
	if(i%2==0)
		{
		printf("%d",i);
		}
	i++;
	}
while(i<=a);

getch();
}