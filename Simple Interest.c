//WAP TO DISPLAY SIMPLE INTEREST
#include<stdio.h>
#include<conio.h>
void main()
{ int p, r, t, si;
clrscr();
printf("\n Enter the values of \n Amount \n Rate \n Time");
scanf("%d %d %d", &p, &r, &t);
si=(p*r*t)/100;
printf("\n Simple Interest=%d", si);
getch(); }
