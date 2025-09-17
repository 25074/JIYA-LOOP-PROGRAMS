#include<stdio.h>
void main()
{
int r,n,i;
printf("Enter a number");
scanf("%d",&n);
while(n!=0)
{r=n%10;
 printf("%d\t",r);
 n=n/10;

}



}
