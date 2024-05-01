#include<string.h>
int main()
{
   int flag=0,i;
   char s1[30],s2[30];
   printf("string s1:");
   scanf("%[^\n]s",s1);
   getchar();
    printf("string s2:");
    scanf("%[^\n]s",s2);
    getchar();
for(i=0;s1[i]!='\0'|| s2[i]!='\0';i++){
if(s1[i]!=s2[i]){
    flag=1;
    break;
        }
}
    
    if (flag==0){
    printf("same");
}
else{
    printf("not same");
}
    
    return 0;
}
