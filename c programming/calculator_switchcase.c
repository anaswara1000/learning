#include <stdio.h>

int main()
{
    int x,y;
    char symbol;
    scanf("%d %c %d",&x,&symbol,&y);
    switch(symbol){
        case '+':
        
        printf("%d",x+y);
        break;
        case '-':
        
        printf("%d",x-y);
        break;
        case '*':
        
        printf("%d",x*y);
        break;
        case '/':
       
        printf("%d",x/y);
        break;
         
    }

    return 0;
}
