#include <stdio.h>

int fun(int n){
    if(n>0){
        fun(n-1);
        printf("%d",n);
       
    }
    else{
        return -1;
    }
    
  return 0;
}


int main()
{
    int n=3;
    printf("%d",fun(n));
    return 0;
}

