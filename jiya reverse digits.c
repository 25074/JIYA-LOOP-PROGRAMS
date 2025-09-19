#include<stdio.h>
int main()
{ int i,n,r;
printf("Enter a number to revrese it's digits");
scanf("%d",&n);
while(n!=0)
{ r=n%10;
  printf("%d",r);
  n=n/10;

}



}
