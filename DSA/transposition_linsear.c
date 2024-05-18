#include<stdio.h>

struct array {
    int A[20];
    int size;
    int len;
};

void display(struct array arr){
   int i;
   for(i=0;i<arr.len;i++)
       printf("%d ",arr.A[i]);
   
}


     
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int linearsearch(struct array *arr,int key){
    int i;
    for (i=0;i<arr->len;i++){
        if(key==arr->A[i]){
          swap(&arr->A[i],&arr->A[i-1]); 
        return i;
        }
    }
   
    return -1;
}
    
    
    int main(){
        struct array arr={{2,3,4,5,6},10,5};
        printf("%d\n",linearsearch(&arr,5));
        display(arr);
       
        return 0;
    }
