#include<stdio.h>

 int f[10];  
int fib(int n){
    if(n<=1){
    f[n]=n;
        return n;
    }
    else{
        if(f[n-2]==-1)
            f[n-2]=fib(n-2);
        if(f[n-1]==-1)
            f[n-1]=fib(n-1);
            
            return f[n-2]+f[n-1];
    }
}

/////////////////////////////////iterative
int fib2(int n){
    int t0=0,t1=1,s,i;
    if(n<=1)
         return n;
    for(i=2;i<=n;i++){
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    return s;
}


///////////////////////////////////recursion

int rfib(int n){
    if(n<=1)
    return n;
   return rfib(n-2)+rfib(n-1) ;
}
int main(){
    int i;
    for(i=0;i<10;i++)
    f[i]=-1;
    int n=7;
    printf("%d",rfib(n));
}
