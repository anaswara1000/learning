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

// void display(struct node *p){
    
//     while(p!=NULL){
//         printf("%d ",p->data);
//         p=p->next;
//     }
    
// }

// void Rdisplay(struct node *p){
//     if(p!=NULL){
//         printf("%d ",p->data);
//         display(p->next);
        
//     }
// }

int count(struct node *p){
    int c=0;
    while(p!=NULL){
        c++;
        p=p->next;
    
    }
    return c;
}

int Rcount(struct node *p){
    if(p==0)
    return 0;
    else
    return Rcount(p->next)+1;
}
int add(struct node *p){
    int sum=0;
    while(p!=0){
        sum=sum+p->data;
        p=p->next;
    }
    return sum;
}

int Radd(struct node *p){
    if(p==0)
    return 0;
    else
    return Radd(p->next)+p->data;
}



int main(){
    int A[]={3,5,7,10,15};
    create(A,5);
    // printf("len is %d",Rcount(first));
    printf("sum is %d",Radd(first));
    // Rdisplay(first);
}
