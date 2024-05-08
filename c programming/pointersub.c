#include<stdio.h>
int main(){
    int d;
    int a[]={0,1,-1,10,11};
    int *p=a;
    int *q=&a[3];
    printf("q-p=%ld\n",q-p);
    printf("p-q=%ld\n",p-q);
    printf("%d\n",*q);
    q=q-2;
    printf("%d\n",*q);
    p=p+2;
    printf("q-p=%ld",q-p);
     
    return 0;
}
