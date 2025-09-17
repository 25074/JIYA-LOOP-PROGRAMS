#include<stdio.h>
void main()
{
int fac=1,i,n;
printf("Enter a number to get it's factorial");
scanf("%d",&n);
for(i=1; i<=n; i++)
{fac=fac*i;}
printf("Factorial of %d is %d",n,fac);






}
