#include<stdio.h>
void main()
{ int i,n,sum=0;
printf("Enter a value");
scanf("%d",&n);
for(i=1; i<=2*n-1; i=i+2)
sum=sum+i;
printf("The sum of first %d odd natural numbers is %d",n,sum);





}
