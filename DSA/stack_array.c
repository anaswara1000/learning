#include<stdio.h>
#include<stdlib.h>


struct stack{
   
    int top;
    int *s;
    int size;
};

void push(struct stack *st,int x){
    if(st->top==st->size-1){
        printf("stack overflow");
    }
    else{
        st->top++;
        st->s[st->top]=x;
    }
}

int pop(struct stack *st){
    int x=-1;
    if(st->top==-1){
        printf("stack underflow");
    }
    else{
        x=st->s[st->top];
        st->top--;
    }
    return x;

}

int main(){
    struct stack *st=malloc(sizeof(struct stack));
    scanf("%d",&st->size);
    st->s=malloc(st->size*sizeof(int));
    st->top=-1;
    push(st,3);
    push(st,4);
    push(st,5);
    pop(st);
    for(int i=0;i<=st->top;i++){
        printf("%d ",st->s[i]);
    }
}
