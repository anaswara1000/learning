#include <iostream>
using namespace std
;
int main()
{
    int i,j=0,n;
    cin>>n;
    
   for(i=0;i<n;i++){
       for(j=0;j<=i;j++){
           cout<<"*";
       }
       cout<<endl;
   }

    return 0;
}


5
*
**
***
****
*****

    #include <iostream>
using namespace std
;
int main()
{
    int i,j=0,n;
    cin>>n;
    int x=1;
   for(i=1;i<n;i++){
       for(j=1;j<=i;j++){
           cout<<j<<"";
       
       }
       cout<<endl;
   }

    return 0;
}


5
1
12
123
1234
