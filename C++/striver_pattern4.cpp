#include <iostream>
using namespace std
;
int main()
{
    int i,j=0,n;
    cin>>n;
  
   for(i=0;i<=n;i++){
       for(j=0;j<n-i+1;j++){
           cout<<"*";
       
       }
       cout<<endl;
   }

    return 0;
}


5
******
*****
****
***
**
*


    #include <iostream>
using namespace std
;
int main()
{
    int i,j=0,n;
    cin>>n;
  
   for(i=0;i<=n;i++){
       for(j=1;j<n-i+1;j++){
           cout<<j<<"";
       
       }
       cout<<endl;
   }

    return 0;
}

5
12345
1234
123
12
1
