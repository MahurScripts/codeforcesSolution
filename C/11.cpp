#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        long long  operations = 0;
        for (int i = 0; i <= n-2; i++) {
            if (a[i] > a[i + 1]) {
                operations += (a[i] - a[i + 1]); 
            }
        }
        
        cout << operations << endl;
    }
    
    return 0;
}