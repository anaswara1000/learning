#include<stdio.h>
void TOH(int n,int A,int B,int C){
    if(n>0){
        TOH(n-1,A,C,B);
        printf("%d to %d\n",A,C);
        TOH(n-1,B,A,C);
    }
}

int main(){
    int n=3;
    int A=1;
    int B=2;
    int C=3;
    TOH(n,A,B,C);
}
