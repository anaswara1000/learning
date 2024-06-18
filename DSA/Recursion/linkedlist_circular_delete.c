#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct node{
    int data;
    struct node* next;
    
}*head;


void create(int A[],int n){
    int i;
    struct node*t,*last;
    head=(struct node *)malloc(sizeof(struct node));
    head->data=A[0];
    head->next=head;
    last=head;
    
    for(i=1;i<n;i++){
        t=(struct node *)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}

int length(struct node *p){
    int len=0;
    do{
        len++;
        p=p->next;
    }
    while(p!=head);
    return len;
}


void insert(struct node *p,int index,int x){
    
    struct node*t;
    int i;
    if(index<0 || index>length(head))
    return;
    
    if(index==0){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=x;
        if(head==NULL){
            head=t;
            head->next=head;
        }
        else{
            
            while(p->next!=head)p=p->next;
            p->next=t;
            t->next=head;
            head=t;
            }
            
            
        }
        else{
            for(i=0;i<index-1;i++) p=p->next;
            t=(struct node*)malloc(sizeof(struct node));
            t->data=x;
            t->next=p->next;
            p->next=t;
        }
    }

 int delete(struct node *p,int index){
     struct node *q;
     int i,x;
     if(index<0 || index>length(head))
     return -1;
     if(index==1){
          while(p->next!=head)p=p->next;
          x=head->data;
          
          if(head==p){
              free(head);
              head=NULL;
              
          }
          else{
              p->next=head->next;
              free(head);
              head=p->next;
          }
     }
     else{
         for(i=0;i<index-2;i++)
         p=p->next;
         q=p->next;
         p->next=q->next;
         x=q->data;
         free(q);
     }
     return x;
 }
  

void display(struct node *h){
    do{
    printf(" %d",h->data);
    h=h->next;
    }
    while(h!=head);
    printf("\n");
}





int main()
{
    int A[]={2,3,4,5,6};
    create (A,5);
//  insert(head,2,10);
   delete(head,5);
    display(head);
    
    return 0;
}


