#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("Enter the character");
scanf("%c",&c);
if(c=="a" || c=="e" || c=="i" || c=="o" || c=="u")
{
printf("The character is a vowel");
}
else
{
printf("The character is a consonant");
}
getch();
}
