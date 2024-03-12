#include<stdio.h>
int main(){
    int x,y;
    char symbol;
    
    scanf("%d %c %d",&x,&symbol,&y);
    if(symbol == '+'){
        printf("%d",x+y);
        
    }
    else if(symbol == '-'){
         printf("%d",x-y);
    }
    else if(symbol=='*'){
        printf("%d",x*y);
        
    }
    
    else if(symbol=='/'){
        printf("%d",x/y);
    }
    return 0;
    
}