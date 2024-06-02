#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int INT_MIN;
struct node{
    int data;
    struct node* next;
    
}*first=NULL,*second=NULL,*third=NULL;


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


void create2(int A[],int n){
    int i;
    struct node*t,*last;
    second=(struct node *)malloc(sizeof(struct node));
    second->data=A[0];
    second->next=NULL;
    last=second;
    
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
void concat(struct node *p,struct node *q){
    third=p;
    
    while(p->next!=NULL)
    p=p->next;
    p->next=q;
}


int main()
{
    int A[]={50,40,10,30,20};
    int B[]={1,2,3,4,5};
    create (A,5);
    create2(B,5);
    
    concat(first,second);
    display(third);
    return 0;
}
