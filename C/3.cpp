/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<algorithm>
#include<vector>
#include<unordered_set>
#include <map>
using namespace std;

int main(){
    int len;
    cin>>len;
    int arr[len];
    map<int,int>freq;
    
    for(int i=0;i<len;i++){
        cin>>arr[i];
        freq[arr[i]]++;
    }
    
   for (auto &i : freq) {
        if(i.second>2){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    
    vector<int> asc, desc;
    for (auto &i : freq) {
        if(i.second ==2){
            asc.push_back(i.first);
            desc.push_back(i.first);
        }
        else{
            desc.push_back(i.first);
        }
    }
    
    sort(asc.begin(),asc.end());
    sort(desc.begin(),desc.end(),greater<int>());
    
    cout<<"YES"<<endl;
    cout<<asc.size()<<endl;
    for(int i=0;i<asc.size();i++){
        cout<<asc[i]<<" ";
    }
    cout<<" "<<endl;
    cout<<desc.size()<<endl;
    for(int i=0;i<desc.size();i++){
        cout<<desc[i]<<" ";
    }
    cout<<" "<<endl;
    
    
    
}