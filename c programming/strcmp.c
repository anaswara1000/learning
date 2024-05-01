#include <stdio.h>
#include<string.h>
int main()
{
   int value;
   char s1[30],s2[30];
   printf("string s1:");
   scanf("%s",s1);
    printf("string s2:");
    scanf("%s",s2);
value=strcmp(s1,s2);
if(value==0){
    printf("same");
}
else{
    printf("not same");
}
    return 0;
}
