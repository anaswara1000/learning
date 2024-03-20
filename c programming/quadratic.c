#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c;
    float d,r1,r2;
    scanf("%f %f %f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0){
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("%.2f\n",r1);
        printf("%.2f\n",r2);
        
    }
    else if(d==0){
        
        r1=r2=-b/(2*a);
        printf("%.2f\n",r1);
    }
    else{
        printf("Determinent is negative\n");
    }
 
    return 0;
}
