//WAP to swap to numbers without using 3rd variable
#include<stdio.h>
#include<conio.h>
void main()
{ int a, b;
clrscr();
printf("\n Enter the values of a and b:");
scanf("%d %d", &a, &b);
a=a+b;
b=a-b;
a=a-b;
printf("\n a=%d", a);
printf("\n b=%d", b);
getch(); }
