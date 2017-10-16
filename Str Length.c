//WAP to find the length of the string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[100],i=0;
int len=0;
clrscr();
printf("Enter a string:");
scanf("%s",s);
while(s[i]!='\0')
{
i++;
len++;
}
printf("length of string :%d",len);
getch();
}
