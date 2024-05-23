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




int main(){
    int m=2;
    int n=3;
    printf("%d",power(2,9));
    return 0;
}



