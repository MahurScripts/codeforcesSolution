#include <iostream>
using namespace std;
int main() {
    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;
    int x = min(k2, min(k5, k6)); 
    k2 -= x;
    int y = min(k2, k3); 
    cout << x * 256 + y * 32;
    return 0;
}
