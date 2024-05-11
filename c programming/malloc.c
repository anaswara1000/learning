#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i,*ptr;
    printf("enter tot no. of values:\n");
    scanf("%d",&n);
    
    ptr=(int*)malloc(n*sizeof(int));
    printf("enter the values:");
    for(i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    printf("entered values are:");
    for(i=0;i<n;i++){
        printf("%d\t",*(ptr+i));
    }
    free(ptr);
}
