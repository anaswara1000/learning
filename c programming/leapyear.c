
#include <stdio.h>
int main()
{
    int year,p,q,r;
    year%100;
    year%4;
    year%400;
    scanf("%d",&year);
  
        if(year%4==0&&year%100==0 && year%400==0){
     printf("leap year");
            
     }
    
    else if(year%4==0&&year%100!=0 ){
   printf("leap year");   
            
        }
         else if(year%4==0&&year%100==0 && year%400!=0){
   printf("not leap year");  
         }
        
        else if(year%4!=0){
            printf("not leap year");
        }
        
    
    
    return 0;
}
