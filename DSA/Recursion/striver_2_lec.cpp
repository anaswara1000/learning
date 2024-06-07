//print name n times

#include<iostream>
using namespace std;

void f(int i,int n){
    if(i>n)
    return;   //base condition
    
   printf("ann\n");
   f(i+1,n);
    
}


int main(){
    int n;
    cin>>n;
    f(1,n);
    return 0;
}

// print 1234 linearly

#include<iostream>
using namespace std;

void f(int i,int n){
    if(i>n)
    return;   //base condition
    
  cout<<i;
   f(i+1,n);
    
}


int main(){
    int n;
    cin>>n;
    f(1,n);
    return 0;
}

//print 4321

#include<iostream>
using namespace std;

void f(int i,int n){
    if(i<n)
    return;   //base condition
    
  cout<<i;
   f(i-1,n);
    
}


int main(){
    int n;
    cin>>n;
    f(n,1);
    return 0;
}

