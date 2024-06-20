#include<stdio.h>
#include<stdlib.h>


struct node{
    struct node *prev;
    int data;
    struct node *next;
}
*first=NULL;

void create(int a[],int n){
    struct node *t,*last;
    int i;
    first=(struct node*)malloc(sizeof(struct node));
    first->data=a[0];
    first->prev=NULL;
    first->next=NULL;
    last=first;
    
    for(i=1;i<n;i++){
        t=(struct node *)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=last->next;
        t->prev=last;
        last->next=t;
        last=t;
    }
}


void reverse(struct node *p){
    struct node *temp;
    p=first;
    while(p){
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;
        if(p!=NULL && p->next==NULL)
        first=p;
    }
}

void display(struct node *p){
    while(p){
        printf(" %d",p->data);
        p=p->next;
    }
    
}


int main(){
    int a[]={10,20,30,40,50};
    create(a,5);
    reverse(first);
    display(first);
    return 0;
}
