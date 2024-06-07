//reverse

#include<iostream>
using namespace std;

int rev(int i,int arr[],int n){
    if(i>=n/2) return 0;
    swap(arr[i],arr[n-i-1]);
    rev(i+1,arr,n);
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) 
    cin>>arr[i];
    rev(0,arr,n);
    for(int i=0;i<n;i++) 
    cout<<arr[i]<<" ";
    return 0;
}


//pallindrome


#include<iostream>
using namespace std;

int pallindrome(int i,string &s){
     if(i>=s.size()/2) return true;
  if (s[i]!=s[s.size() -i-1]) return false;
  return  pallindrome(i+1,s);
  
   
}

int main(){
    string s="madam";
    
    cout<<pallindrome(0,s);
    return 0;
 }




