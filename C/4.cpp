#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    
    long long result = 2 * ((1LL << n) - 1); 

    cout << result << endl;
    return 0;
}
