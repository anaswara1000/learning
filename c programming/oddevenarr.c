#include<stdio.h>
int main(){
    int a[10];
    int even=0,odd=0;
    int i;
    for(i=0;i<4;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<4;i++){
        if(a[i]%2==0)
            even++;
        else
            odd++;
        
    }
    printf("%d\n",even);
    printf("%d\n",odd);
    return 0;
}
