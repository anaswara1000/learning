#include<stdio.h>

struct array{
    int A[20];
    int size;
    int len;
};

void display(struct array arr){
    int i;
    printf("\nelements\n");
    for(i=0;i<arr.len;i++)
        printf("%d ",arr.A[i]);
    
}
int main(){
    struct array arr={{2,3,4,5,6},20,5};
    
        display(arr);
        return 0;
    }
    
    
    
