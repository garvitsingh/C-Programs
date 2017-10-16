//Design a structure to input and display record of n number of students of a class. Ask n from user.
#include<stdio.h>
#include<conio.h>
struct abc
{
char name[50];
int age;
int per;
}stu[10];
void main()
{
int n,i;
clrscr();
printf("Enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the name \t");
scanf("%s",stu[i].name);
printf("Enter the age \t");
scanf("%d",&stu[i].age);
printf("Enter the percentage\t");
scanf("%d",&stu[i].per);
}
for(i=0;i<n;i++)
{
printf("The name of student is");
puts(stu[i].name);
printf("The age of student is %d",stu[i].age);
printf("The percentage of student is %d",stu[i].per);
}
getch();
}
