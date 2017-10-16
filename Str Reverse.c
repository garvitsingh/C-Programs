//WAP to reverse a string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[10],r[10];
int i=0,j=0;
clrscr();
printf("\nEnter string->");
gets(s);
for(i=0;s[i]!='\0';,i++);
i--;
for(j=0;i>=0;i--,j++)
{
r[j]=s[i];
}
r[j]='\0';
printf("\n\n revesed string is ->");
puts(r);
getch();
}
