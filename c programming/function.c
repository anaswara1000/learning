#include <stdio.h>

void sum(); //fn declaration


void main(){
    sum(); //fn calling
}


void sum () //fn definition
{
  int a,b,sum=0;
  printf("enter two no:");
  scanf("%d %d",&a,&b);
  sum=a+b;
  printf("sum=%d",sum);
 
}
