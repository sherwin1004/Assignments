#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,x;
clrscr();

printf("enter value",x);
scanf("%d",&x);

for(i=1;i<=x;i++)
{
	for(j=1;j<=i;j++)
	{
		printf("*");
	}
	printf("\n");
}
getch();
}