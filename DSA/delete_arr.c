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
void append(struct array *arr,int x){
    if (arr->len<arr->size)
    arr->A[arr->len++]=x;
}

void insert(struct array *arr,int index,int x){
    int i;
    if(index>=0 && index<= arr->len){
        for(i=arr->len;i>index;i--)
        arr->A[i]=arr->A[i-1];
        arr->A[index]=x;
        arr->len++;
    }
}

int delete(struct array *arr,int index){
    int x=0;
    if(index>=0 && index<=arr->len){
        x=arr->A[index];
        for(int i=index;i<arr->len-1;i++){
            arr->A[i]=arr->A[i+1];
            
        }
        arr->len--;
        return x;
    }
    
    
    return 0;
}

int main(){
    struct array arr={{2,3,4,5,6},20,5};
     // insert(&arr,3,10);
      printf("%d\n",delete(&arr,4));
       //append(&arr,10);
        display(arr);
        return 0;
    }
