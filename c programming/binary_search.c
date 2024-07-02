#include<stdio.h>
#include<stdlib.h>

int bin_search(int arr[],int n,int key){
int low=0;
int high=n-1;
int mid;
while(low<=high){
mid=(low+high)/2;

if(arr[mid]==key)
return mid;
else if(arr[mid]<key)
    low=mid+1;
else
    high=mid-1;

}
return -1;
}

int main(){
    int n,i,s,key;
    scanf("%d",&n);
    int arr[n];
    
    for(i=1;i<=n;i++)
    scanf("%d",&arr[i]);
  
    scanf("%d",&key);

    int index=bin_search(arr,n,key);
    if(index!=-1){
        printf("element found %d at %d",key,index);
    }
    else{
        printf("not found %d",key);
    }
}
