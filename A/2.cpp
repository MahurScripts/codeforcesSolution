#include <iostream>
#include <unordered_set>
using namespace std;


int main() {
    unordered_set <int> set1;
    int shoeColor;
    for(int i=0;i<4;i++){
        cin>>shoeColor;
        set1.insert(shoeColor);
    }
    
    cout<<4-set1.size();
}
