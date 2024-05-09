#include <stdio.h>
#include<stdlib.h>


void main ()
{
    
  int *ptr=(int*)malloc(sizeof (int));
  *ptr=10;
  printf("%d\n",*ptr);
  free(ptr);
  ptr=NULL;
   printf("%d\n",*ptr);
}
