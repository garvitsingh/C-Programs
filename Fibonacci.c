//WAP TO DISPLAY A FIBONACCI SERIES
#include<stdio.h>
#include<conio.h>
void main()
{int a,b, limit, sum=0, i;
clrscr();
printf("\n Enter the limit:");
scanf("%d", &limit);
a=0;
b=1;
printf("\n %d \n %d", a, b);
for(i=1;i<=limit-2;i++)
{sum=a+b;
printf("\n %d", sum);
a=b;
b=sum;}
getch();}
