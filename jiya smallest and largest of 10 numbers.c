#include<stdio.h>
int main()
{ int i,num;
  int smallest=1000;
  int largest=0;

  for(i=1;i<=10; i++)
  {   printf("Enter number %d: ",i);
        scanf("%d",&num);
        if(smallest>num)
        smallest=num;
        if(largest<num)
        largest=num;
  }

printf("The Largest Number is %d\n",largest);
printf("The Smallest Number is %d\n",smallest);

}





