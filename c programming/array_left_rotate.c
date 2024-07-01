#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,k;
    scanf("%d",&n);
   int arr[n];
   int i;
   for( i=0;i<n;i++)
   scanf("%d",&arr[i]);
   scanf("%d",&k);
   int new_arr[n];

   for( i=k;i<n;i++){
    new_arr[i-k]=arr[i];
   }
   for(int i=0;i<k;i++){
    new_arr[n-k+i]=arr[i];
   }
   for(i=0;i<n;i++)
   printf("%d ",new_arr[i]);

   
   }

// input
// 5
// 1 2 3 4 5
// 2
// output
// 3 4 5 1 2
