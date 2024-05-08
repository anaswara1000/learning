#include<stdio.h>
void main(){
    float a=10,b=5;
    float *p,*q;
    p=&a;
   q=&b;
    *q=*p;
    printf("a=%f %f %f",a,*p,*q);
    
}
