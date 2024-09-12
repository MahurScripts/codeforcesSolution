#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;
        
        vector<int> ones_blocks;
        int count = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                count++;
            } else if (count > 0) {
                ones_blocks.push_back(count);
                count = 0;
            }
        }

        if (count > 0) {
            ones_blocks.push_back(count);
        }

        sort(ones_blocks.rbegin(), ones_blocks.rend());

        int alice_score = 0;
        for (int i = 0; i < ones_blocks.size(); i += 2) {
            alice_score += ones_blocks[i];
        }

        cout << alice_score << endl;
    }

    return 0;
}
