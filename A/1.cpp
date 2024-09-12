/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int countfreq(int arr []){
    int count=0;
    for(int i=0;i<3;i++){
        if(arr[i]==1){
            count+=1;
        }
    }
    return count;
    }
int main()
{
    int len;
    cin>>len;
    int arr[len][3];
    for(int i=0;i<len;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    
    
    int prob=0;
    for(int i=0;i<len;i++){
    if(countfreq(arr[i])>=2){
        prob+=1;
    }
    }
    cout<<prob;
    
    
}