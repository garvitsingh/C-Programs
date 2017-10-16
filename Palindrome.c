//WAP to check whether a number is palindrome or not.
#include<stdio.h>
#include<conio.h>
void main()
{int num, rem=0, rev=0, omg;
clrscr();
printf("\n Enter a number");
scanf("%d", &num);
omg=num;
while(num>0)
{rem=num%10;
rev=rev*10+rem;
num=num/10;
}
printf("\n %d", rev);
if(omg==rev)
printf("\n This number is palindrome");
else
printf("\n This number is not palindrome");
getch();}
