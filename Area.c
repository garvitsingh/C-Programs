//WAP to calculate the area of rectangle, square and circle. Declare pi as constant.
#include<stdio.h>
#include<conio.h>
void main()
{int l, b, s, r;
const float pi=3.14;
clrscr();
printf("\n Enter the lenght, breadth, side and radius");
scanf("%d %d %d %d", &l, &b, &s, &r);
printf("\n Area of rectangle:%d", l*b);
printf("\n Area of sqaure:%d", s*s);
printf("\n Area of circle:%d", pi*r*r);
getch(); }
