#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int MIN;
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


void removeduplicate(struct node *p){
    struct node *q=p->next;
    while(q!=NULL){
        if (p->data!=q->data){
            p=q;
            q=q->next;
        }
        else{
            p->next=q->next;
            free(q);
            q=p->next;
        }
    }
}



int main()
{
    int A[]={10,20,20,20,30,40,40,40,50};
    create (A,9);
    removeduplicate(first);
    
    display(first);
    
    return 0;
}



