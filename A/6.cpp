#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    // Step 1: Find the lexicographically largest character
    char max_char = 'a';  // We know 'a' is the smallest lexicographical letter
    for (char c : s) {
        if (c > max_char) {
            max_char = c;
        }
    }

    // Step 2: Count occurrences of the largest character
    int count = 0;
    for (char c : s) {
        if (c == max_char) {
            count++;
        }
    }

    // Step 3: Output the result by repeating the max_char count times
    for (int i = 0; i < count; i++) {
        cout << max_char;
    }
    cout << endl;

    return 0;
}
