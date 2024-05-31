#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
    
}*first=NULL;


void create(int A[],int n){
    int i;
    struct node*t,*last;
    first=(struct node *)malloc(sizeof(struct node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    
    for(i=1;i<n;i++){
        t=(struct node *)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void display(struct node *p){
    
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    
}


void Sortedinsert(struct node *p,int x){

    struct node *t,*q=NULL;
    t=(struct node *)malloc(sizeof (struct node));
    t->data=x;
    t->next=NULL;
    
    if(first==NULL)
        first=t;
    else{
        while(p!=0 && p->data<x){
            q=p;
            p=p->next;
        }
        if(p==first){
            t->next=first;
            first=t;
        }
        else{
            t->next=q->next;
            q->next=t;
        }
    }
    
}
int main()
{
    int A[]={10,20,30,40,50};
    create(A,5);
    Sortedinsert(first,35);
    
    display(first);
    
    return 0;
}










