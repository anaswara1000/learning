#include<stdio.h>
void main(){
    int size,i,n;
    printf("enter the size of array:");
    scanf("%d",&size);
    int A[size];
   for(int i=0;i<size;i++){
    scanf("%d",&A[i]);
       }
    int flag=0;
    for(int j=0;j<size-1;j++){  
       if(A[j]>A[j+1]){
           printf("Not sorted");
           flag=1;
           break;
       }
    }
    if(flag!=1)
    printf("Sorted");
}
