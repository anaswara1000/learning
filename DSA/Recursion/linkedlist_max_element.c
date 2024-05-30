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


int max(struct node *p){
    int m=INT_MIN;
    while(p!=0){
        if(p->data>m){
            m=p->data;
            p=p->next;
        }
    }
        return m;
        
}

int Rmax(struct node *p){
    int m=0;
    if(p==0)
        return 0;
    else
        m=Rmax(p->next);
    if (m>p->data)  
        return m;
    else
        return p->data;
    
}

int main(){
    int A[]={3,5,7,10,15};
    create(A,5);
    printf("max is %d",max(first));
    
}
