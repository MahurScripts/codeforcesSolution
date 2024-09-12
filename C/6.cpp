/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<map>
using namespace std;

int main()
{
    
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int arr[n];
    map<int,int> freq ;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        freq[arr[i]]++;
    }
    int distinct=0;
    int max_of_dup=0;
    
    for(auto i=freq.begin();i!=freq.end();i++){
        if(i->second==1){
            distinct+=1;
        }
    
        max_of_dup= max(max_of_dup,i->second);
        
        
    }
    
    if(max_of_dup==0){
        cout<<0<<endl;
    }
  else{
    cout<<min(distinct,max_of_dup-1)<<endl;}
    
    
    
}
    
}