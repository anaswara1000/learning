#include<stdio.h>
int main(){
    int i,j;
    int arr[4][6];
    for (int i=0;i<4;i++){
        for(j=0;j<6;j++){
            arr[i][j] = 1;
            if(i%2 == 1 && j%3 == 2){
                arr[i][j] = 0;
            }
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<6;j++){
            printf("%d ",arr[i][j]);
        }printf("\n");
    }printf("\n\n");

    return 0;
}

