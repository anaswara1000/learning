#include<stdio.h>
int main(){
    char A[30];
    char B[30];
    scanf("%s",A);
    scanf("%s",B);
    int i,H[26]={0};
    
    for(i=0;A[i]!='\0';i++){
        
        H[A[i]-97]+=1;
    }
        
    for(i=0;B[i]!='\0';i++){
        
        H[B[i]-97]-=1;
        
    if (H[A[i]-97]<0){
    printf("not anagram");
        break;
    }
}

if(B[i]=='\0'){
    printf("its anagram");
}


    }
