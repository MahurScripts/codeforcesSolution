#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;
    int candy[n];
    int orange[n];
 
    for (int i = 0; i < n; i++) {
        cin >> candy[i];
    }
 
    for (int i = 0; i < n; i++) {
        cin >> orange[i];
    }
 
    int min_candy = *min_element(candy, candy + n);
    int min_orange = *min_element(orange, orange + n);
 
    long long total_moves = 0;
 
    for (int i = 0; i < n; i++) {
        int diff_candy = candy[i] - min_candy;
        int diff_orange = orange[i] - min_orange;
        total_moves += max(diff_candy, diff_orange);
    }
 
    cout << total_moves << endl;
}
    return 0;
}