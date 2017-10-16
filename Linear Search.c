//WAP TO PERFOTM LINEAR SEARCH
#include<stdio.h>
#include<conio.h>
void main()
{int arr[15], i, n, s, flag=0;
clrscr();
printf("\n Enter the number of elements");
scanf("%d", &n);
for(i=0;i<n;i++)
scanf("%d", &arr[i]);
printf("\n Enter the element you want to search");
scanf("%d", &s);
for(i=0;i<n;i++)
{ if(arr[i]==s)
{flag=1;
break;} }
if(flag==1)
printf("\n Element found at location %d", i+1);
else
printf("\n Element no found");
getch();}
