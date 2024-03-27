    
#include <stdio.h>

int compoundintrest(int capital,float rate,float year){
    float intrest;
    int i;
    
    rate=rate/100;
    
    for(i=1;i<=year;i++){
        intrest=capital*rate;
    capital=intrest+capital;
    }
  
  
    printf("%d",capital);
    return capital;
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
