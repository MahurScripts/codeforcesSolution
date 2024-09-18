/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include<algorithm>
#include<climits>
using namespace std;
void minOperations()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int f[2][26]={};
    int result=INT_MAX;
    for(int i=0;i<n;i++){
        f[i%2][s[i]-'a']++;
    }
    if(n%2==0){
         result=n-*max_element(f[0],f[0]+26)-*max_element(f[1],f[1]+26);
    }
    else{
        for(int i=0;i<n;i++){
        f[i%2][s[i]-'a']--;
        result=min(result,n-*max_element(f[0],f[0]+26)-*max_element(f[1],f[1]+26));
        f[(i+1)%2][s[i]-'a']++;
        }
    }
    cout<<result<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        minOperations();
    }
    return 0;
}
