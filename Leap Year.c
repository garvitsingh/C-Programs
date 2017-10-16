// WAP TO CHECK WEATHER A YEAR IS A LEAP YEAR OR NOT
#include<stdio.h>
#include<conio.h>
void main()
{ int yr;
clrscr();
printf("Enter the year");
scanf("%d", &yr);
if(yr%4==0)
printf("\n The Year is a Leap Year");
else
printf("\n The Year is not a Leap Year");
getch();}
