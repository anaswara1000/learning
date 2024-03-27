#include <stdio.h>

int compoundintrest(int capital,float rate,float year){
    float intrest;
    int principal;
    
    
    rate=rate/100;
    intrest=capital*rate*year;
    principal=intrest+capital;
    printf("%d",principal);
    return principal;
}



int main(){
    int capital;
    float rate;
    float year;
    int principal;
    float intrest;
    scanf("%d\n%f\n%f",&capital,&rate,&year);
    intrest=compoundintrest(capital,rate,year);


    return 0;
}
