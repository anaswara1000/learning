#include<stdio.h>
int main(){
    int a[10],i;
    int arr1[5],arr2[5],sum[5];
    for(i=0;i<5;i++)
    {
           scanf("%d",&arr1[i]) ;
    }
    for(i=0;i<5;i++)
    {
           scanf("%d",&arr2[i]) ;
    }
    for(i=0;i<5;i++){
        sum[i]=arr1[i]+arr2[i];
        
    printf("%d\n",sum[i]);
        
    }
    return 0;
}
