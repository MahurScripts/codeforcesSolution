/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{  
    long long n,size;
    cin>>n>>size;
    
    vector<pair<long long,long long>> pairs(n);
    vector<long long> diffArray;
    long long sumOrg=0;
    
    for(int i=0;i<n;i++){
       long long first, second;
       cin>>first>>second;
       pairs[i]=make_pair(first,second);
       diffArray.push_back(first-second);
       sumOrg+=first;
       
    }
    
    if(sumOrg<=size){
        cout<<"0"<<endl; 
        return 0;
    }
    
    sort(diffArray.begin(),diffArray.end(),greater<long long>());
    long long reqSpace=sumOrg-size;
    long long currentSum=0;
    
    for(int i=0;i<n;i++){
        currentSum+=diffArray[i];
        if(currentSum>=reqSpace){
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;

    return 0;
}