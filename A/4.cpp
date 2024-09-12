#include <iostream>
#include <string>
#include<unordered_set>
using namespace std;
void swap(int &a,int &b){
    int c=a;
    a=b;
    b=c;
}

int main() {
    int n;
    cin>>n;
    
    if(n%2!=0){
        cout<<"-1";
    }
    else{
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i]=i+1;
        }
        for(int i=0;i<n;i+=2){
        
                swap(arr[i],arr[i+1]);
            
        
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        
    }
}
