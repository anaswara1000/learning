#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    
// precompute

  map<int,int>mpp;
   for(i=0;i<n;i++){
       mpp[arr[i]]++;
   }
  
  int q;
  cin>>q;
  while(q--){
      int number;
      cin>>number;   //fetch
      
      cout<<mpp[number]<<endl;
  }

    return 0;
}
