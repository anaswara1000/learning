
#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  int copy;
  copy=n;
  int a,b,rev=0;
  
  while(n!=0){
      a=n%10;
      rev=rev*10+a;
      
        n/=10 ;
  }
      
      
      if(rev==copy){
  printf("palindrome");
  }
 else{
      printf("not palindrome");
  }
  
  
    return 0;
}
