//WAP to check whether a string is palindrome or not.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[20];
int flag=0,i,l=0;
clrscr();
printf("Enter a string\n");
gets(s);
l=strlen(s);
for(i=0;i<l;i++)
{
if(s[i]==s[l-1])
{
flag=1;}
else
{flag=0;
break;
    }
l--;}
if(flag==1)
printf("palindrome");
else
printf("not a palindrome");
getch(); }
