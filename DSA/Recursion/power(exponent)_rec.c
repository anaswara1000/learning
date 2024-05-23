#include<stdio.h>
#include<math.h>

int power(int m,int n){
    
    if (n==0){
        return 1;
    }
    else{
        return power(m,n-1)*m;
    }
}
/////////////////another method
int power1(int m,int n){
    if(n==0)
        return 1;
    if(n%2==0)
        return power1(m*m,n/2);
    else
        return m*pow(m*m,(n-1)/2);
}


int main(){
    int m=2;
    int n=3;
    printf("%d",power1(2,9));
    return 0;
}






