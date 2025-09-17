#include<stdio.h>
void main()
{
int d=0,r,n,i;
printf("Enter a number");
scanf("%d",&n);
while(n!=0)

{n=n/10;
  d+=1;
}
 printf("The number of digits is %d",d);


}
