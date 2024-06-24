#include<stdio.h>
#include<stdlib.h>

struct node{
 int data;
 struct node *next;
};

struct stack{
    struct node *top;
};

struct node* create_node(int x){
    struct node *new=(struct node *)malloc(sizeof(struct node));
    new->data=x;
    new->next=NULL;
   return new;
}

void push(struct stack *st,int x){
    struct node *t=create_node(x);
    if(t==NULL){
        printf("stack overflow");
    }
    else{
        t->next=st->top;
        st->top=t;;
    }
}
int pop(struct stack *st){
    int x=-1;
    if(st->top==NULL){
           printf("stack empty");
    }
    else{
        struct node *p=st->top;
        st->top=st->top->next;
        x=p->data;
        free(p);
    }
    return x;
}

int peek(struct stack* st, int pos){
    int i;
    struct node *p=st->top;
    for(i=0;p!=NULL && i<pos-1;i++)
        p=p->next;
    if(p!=NULL){
        return p->data;
    }
    else{
        return -1;
    }
}

int main(){
    struct stack st;
    st.top=NULL;
    push(&st,5);
    push(&st,10);
    push(&st,15);
    push(&st,20);
    pop(&st);
    struct node *temp=st.top;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n%d",peek(&st,0));
}

