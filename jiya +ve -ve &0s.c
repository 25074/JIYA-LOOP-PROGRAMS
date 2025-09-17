#include<stdio.h>
void main()
{ int positive=0
,negative=0,zeroes=0,i,num;
  for(i=1; i<=10; i++)
  { printf("Enter Number");
    scanf("%d",&num);
    if(num==0)
    zeroes+=1;
    if(num>0)
    positive+=1;
    if(num<0)
    negative+=1;
  }

  printf("Number of Positive Numbers is %d\n", positive);
  printf("Number of Negative Numbers is %d\n", negative);
  printf("Number of Zeroe Numbers is %d\n", zeroes);





}
