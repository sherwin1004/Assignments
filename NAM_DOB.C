#include<stdio.h>
#include<conio.h>
void main()
{
int dob, age;
char name[10], address[50];
clrscr();

printf("enter name-\n");
scanf("%s",&name);

printf("enter date of birth-\n");
scanf("%d",&dob);

printf("enter age-\n");
scanf("%d",&age);

printf("enter address-\n");
scanf("%s",&address);

printf("-------------\n");
printf("my name %s \n",name);
printf("my date of birth is %d",dob);
printf("my age is %d \n",age);
printf("my address is %s \n",address);
getch();
}



