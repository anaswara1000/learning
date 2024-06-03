#include<stdio.h>
#include<stdlib.h>
#include<math.h>

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
int count(struct node *p){
    int c=0;
    while( p!=0){
        c++;
        p=p->next;
    }
    return c;
}
/////////////////////////////////
// normal reverse
void reverse1(struct node *p){
    
    int *A;
    int i=0;
    struct node *q=p;
    A=(int*)malloc(sizeof(int)*count(p));
    
    while(q!=NULL){
        A[i]=q->data;
        q=q->next;
        i++;
    }
    q=p;
    i--;
    while(q!=NULL){
        q->data=A[i];
        q=q->next;
        i--;
    }
}
 ///////////////////////////////
// slidiing pointer
void reverse2(struct node *p) {
    struct node *q=NULL,*r=NULL;
    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}   
   ////////////////////////////////////// // 
// recursion

void reverse3(struct node *q,struct node *p){
    if(p){
        reverse3(p,p->next);
        p->next=q;
    }
    else{
        first=q;
    }
}
    



int main()
{
    
   
    int A[]={10,20,30,40,50};
    
    create (A,5);
   reverse3(NULL,first);
   display(first);
    return 0;
}
