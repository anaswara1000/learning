#include<stdio.h>
#include<string.h>
int main(){
    int count=0;
   char name[30];
   int i=0;
   printf("enter name:");
   scanf("%s",&name);
   
   while(name[i]!='\0'){
       count++;
       i++;
   }
   printf("%d",count);
  
    return 0;
}
