// /******************************************************************************

//                               Online C++ Compiler.
//                Code, Compile, Run and Debug C++ program online.
// Write your code in this editor and press "Run" button to compile and execute it.

// *******************************************************************************/

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     int open;
//     int close;
//     int balance;
//     int move;
//     while(t--){
//         int len;
//         cin>>len;
//         string string1;
//         open=0;
//         close=0;
//         balance=0;
//         move=0;
//         cin>>string1;
//         for(int i=0;i<len;i++){
//             if(string1[i]=='('){
//                 open+=1;
//             }
//             else{
//                 close+=1;
//             }
//             balance=min(balance,(open-close));
//             if(balance<0){
//                 move=balance;
//             }
//         }
//         cout<<abs(move);
//     }
    
// }


//running code
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int len;
        cin >> len;
        string string1;
        cin >> string1;

        int balance = 0;
        int min_balance = 0;

        for (char c : string1) {
            if (c == '(') {
                balance++;
            } else {
                balance--;
            }
            min_balance = min(min_balance, balance);
        }

        cout << abs(min_balance) << endl;
    }

    return 0;
}
