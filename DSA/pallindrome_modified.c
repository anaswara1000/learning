#include<stdio.h>
#include<string.h>
int main(){
    char A[30];
    char B[30];
    int i;
   
    scanf("%s",A);
    int j;
    for(i=0;A[i]!='\0';i++){
    }
    i=i-1;
    for(j=0;i>=0;i--,j++){
        B[j]=A[i];
    }
    B[j]='\0';

  if(strcmp(A,B)==0){
      printf("string is pallindrome");
  }
  else {
      printf("string is not pallindrome");
  }
 
  return 0;
      
  }
 
