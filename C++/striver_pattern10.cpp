#include <iostream>
using namespace std;

void print1(int n){
    int num =1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        cout<<num;
        num=num+1;
        }
        cout<<endl;
   }
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        print1(n);
    }
    
}



1
5
1
23
456
78910
1112131415
