//WAP TO FIND FACTORIAL OF A NUMBER
#include<stdio.h>
#include<conio.h>
void main()
{int i, n, fact=1;
clrscr();
printf("\n PROGAM TO FIND THE FACTORIAL OF A NUMBER");
printf("\n \n Enter a number:");
scanf("%d", &n);
for(i=1;i<=n;i++)
{fact=fact*i;
}
printf("\n Factorial is: %d", fact);
getch();}
