/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cin>>arr[i][j];
        }
    }
    
    int sum=0;
    int middle=n/2;
    for(int i=0;i<n;i++){
        sum+=arr[i][i];
        
        if(i!=middle){
            sum+=arr[i][middle];
            sum+=arr[middle][i];
        }
        
        if(i!=middle){
            sum+=arr[i][n-i-1];
        }
        
    }
    cout<<sum;

    return 0;
}