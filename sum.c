#include<stdio.h>
#include<conio.h>
int main()
{
 int n,ctr,sum=0;
 scanf("%d",&n);
 for(ctr=1;ctr<=n;ctr++)
 {
   sum=sum+ctr;
 }
 printf("%d",sum);
 return 0;
}
