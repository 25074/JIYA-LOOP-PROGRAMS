#include<stdio.h>
void main()
{ int i,females=0,males=0;
 char n;
for(i=1; i<=10; i++)
{ printf("Enter F for female and M for male");
  scanf("%c\n",&n);
  if(n=='F')
  females+=1;
  if(n=='M')
  males+=1;
}
 printf("Number of females is %d\n",females);
 printf("Number of males is %d\n",males);



}
