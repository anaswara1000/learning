#include<stdio.h>

int main(){
    int i,n,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0,j=n-1;i<j;i++,j--){
       
     int temp=arr[i];
     arr[i]=arr[j];
     arr[j]=temp;
  
    }
    for(i=0;i<n;i++)    
    printf(" %d",arr[i]);
    
}

// optimal
// #include<stdio.h>

// int main(){
//     int i,n,j;
//     scanf("%d",&n);
//     int arr[n];
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     for(i=0;i<n/2;i++){
       
//      int temp=arr[i];
//      arr[i]=arr[n-i-1];
//      arr[n-i-1]=temp;
  
//     }
//     for(i=0;i<n;i++)    
//     printf(" %d",arr[i]);
    
// }

