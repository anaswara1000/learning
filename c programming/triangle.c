#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    
    if(a==b &&b==c){
        printf("equilateral\n");
    }
    
         if((a==b&&b!=c )||(a!=b&& b==c) ||(a==c&&c!=b)){
        printf("isosceles\n");
    }
         if((a+b<=c) || (b+c<=a) || (a+c<=b)){
 
        printf("invalid\n");
        
    }
             else if(a!=b&&b!=c){
    
        printf("scalene\n");
}
    
    return 0;
}
