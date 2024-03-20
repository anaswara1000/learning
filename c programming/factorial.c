#include<stdio.h>
#include<math.h>

int main(){
    int n,m;
   scanf("%d",&n);
    if(n!=0){
         m=1;
   for(int i=1;i<=n;i++){
       m=m*i;
   }
       printf("%d",m);
    
    }
    return 0;
}
