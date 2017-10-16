//WAP to covert Farenheit into Centigrade
#include<stdio.h>
#include<conio.h>
void main()
{ int C, F;
clrscr();
printf("\n Enter the temperature:");
scanf("%d", &F);
C=(5*(F-32))/9;
printf("In Centigrade:%d", C);
getch(); }
