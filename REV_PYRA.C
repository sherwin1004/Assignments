#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,x;
clrscr();

printf("enter value",x);
scanf("%d",&x);

for(i=x;i>=1;i--)
{
	for(j=i;j>=1;j--)
	{
		printf("*");
	}
	printf("\n");
}
getch();
}