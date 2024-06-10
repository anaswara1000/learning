#include<iostream>
using namespace std;

void print10(int n){
    int i,j;
    for(i=0;i<=2*n-1;i++){
        int stars =i;
        if(i> n){   //if(row>n)
            stars=2*n-i;
        }
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        int n;
        cin>>n;
        print10(n);
    }
    
}



1
5

*
**
***
****
*****
****
***
**
*
