//WAP TO REVERSE A GIVEN NUMBER
#include<stdio.h>
#include<conio.h>
void main()
{int num, rem=0, rev=0;
clrscr();
printf("\n Enter a number:");
scanf("%d", &num);
while(num>0)
{rem=num%10;
rev=rev*10+rem;
num=num/10;}
printf("\n %d", rev);
getch();}
