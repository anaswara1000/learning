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

int count(struct node *p){
    int c=0;
    while( p!=0){
        c++;
        p=p->next;
    }
    return c;
}


int delete(struct node *p,int index){
    struct node *q;
    int i;
    int x=-1;
    
    if(index<1 || index>count(p))
        return -1;
    if (index==1){
        q=first;
        x=first->data;
        first=first->next;
        free( q);
        return x;
    }
    else{
        for(i=0;i<index;i++){
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        free( p);
        return x;
    }
}


int issorted(struct node *p){
    int x=MIN;
    while(p!=NULL){
        if (p->data<x)
        return 0;
        x=p->data;
        p=p->next;
    }
    return 1;
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
  
// recursion reverse

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
    int A[]={10,20,20,20,30,40,40,40,50};
    create (A,9);
    removeduplicate(first);
    
    display(first);
    
    return 0;
}



