#include <stdio.h>
#include<string.h>
int main(){
    char arr[] = "abcdefg";
    int length = strlen(arr);
    char reversed_array[length];
     for(int i=0;i<length;i++){
         reversed_array[i] = arr[length-i-1];
    }
    printf("%s",reversed_array);
    
    return 0;
}
