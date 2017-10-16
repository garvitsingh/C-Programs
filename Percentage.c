// WAP to calculate total marks and percentage of three subjects
#include<stdio.h>
#include<conio.h>
void main()
{ int eng, hindi, math, total;
clrscr();
printf("\n Enter your marks in \n English \n Hindi \n Maths");
scanf("%d %d %d", &eng, &hindi, &math);
total=eng+hindi+math;
printf("\n Total marks:%d", total);
printf("\n Percentage:%d", total/3);
getch(); }
