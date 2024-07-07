#include <iostream>
#include <vector>

using namespace std;

int main()
{
    
    vector<int> v = {1, 2, 3, 4, 5};


    cout << "Original vector: ";
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

   
    cout << "Reversed vector: ";
    for (auto it = v.rbegin(); it != v.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
