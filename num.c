#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter the number");
scanf("%d",&n);
if(n>0)
{
printf("The number is positive");
}
else if(n==0)
{
printf("The number is zero");
}
else
{
printf("The number is negative");
}
getch();
}
