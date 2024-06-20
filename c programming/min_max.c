#include<stdio.h>
int main(){
    
    int i,n;
    scanf("%d",&n);
    int arr[n];
    
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);}
    int min=arr[0];
    int max=arr[0];
    for(i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];}
        else{
            max=arr[i];
        }
    }
printf("min is %d\n",min);
printf("max is %d",max);
}
