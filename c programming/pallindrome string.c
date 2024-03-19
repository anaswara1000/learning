#include<stdio.h>
#include<string.h>
int main(){
    char arr[100];
    scanf("%s",arr);
    
    int length=strlen(arr);
    char reversed_array[100];
    for(int i=0;i<length;i++){
        reversed_array[i]=arr[length-i-1];
    }
        if(strcmp(arr,reversed_array) == 0){
            printf("pallindrome");
        }
        else{
            printf("not pallindrome");
        }
    
    return 0;
}
