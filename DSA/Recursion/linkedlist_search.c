#include<stdio.h>
#include<limits.h>
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

struct node* search(struct node*p,int key){
    while(p!=NULL)
    {
        if(key==p->data)
            return p;
        p=p->next;
    }
    return NULL;
}

struct node* Rsearch(struct node *p,int key){
    if(p==0)
        return 0;
    if(key==p->data)
        return p;
    return Rsearch(p->next, key);
}

int main(){
    struct node *temp;
    int A[]={3,5,7,10,15};
    create(A,5);
    
    temp=Rsearch(first,7);
    if (temp!=NULL)
        printf("key is found %d",temp->data);
    else
        printf("key not found");
    
}
