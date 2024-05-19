#include<stdio.h>
void main(){
    
    int size,i,n;
    printf("enter the size of array:");
    scanf("%d",&size);
    int A[size];
    for(int i=0;i<size;i++){
        scanf("%d",&A[i]);
    }
    i=0;
    while(i<size){
        n=5*A[i];
        A[i]=n;
        
        i++;
    }
}
