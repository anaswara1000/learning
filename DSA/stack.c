#include <stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int s[];
};

void push(struct stack *st,int x){
    if(st->top==(st->size)-1){
        printf("stack overflow\n");
    }
    else{
        (st->top)++;
        st->s[st->top]=x;
    }
}    

int pop(struct stack *st){
    int x=-1;
    if(st->top==-1){
        printf("stack underflow\n");
    }
    else{
        x=st->s[st->top];
        st->top--;
    }
    return x;
}

int main()
{
    struct stack *st=malloc(sizeof(struct stack));
    scanf("%d",&(st->size));
    st->top=-1;
    push(st,5);
    push(st,7);
    push(st,8);
     pop(st);
    for(int i=0;i<=st->top;i++){
        printf("%d ",st->s[i]);
    }
    free(st);
    return 0;
}
