#include<iostream>
using namespace std;

void print(){
    cout<<1<<endl;
    print();
}

int main(){
    print();
    return 0;
}

// //////////////////////////////////
#include<iostream>
using namespace std;

 int  count=0;
void print(){
    if(count==4)
    return;
    else
    cout<<count<<endl;
    
    count++;
    print();
}

int main(){
    print();
    return 0;
}
