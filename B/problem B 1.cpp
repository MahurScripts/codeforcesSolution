#include <iostream>
using namespace std;

int main()
{
   int no_drinks;
   cin>>no_drinks;
   double arr[no_drinks];
   double num=0.0;
   for(int i=0;i<no_drinks;i++){
       cin>>arr[i];
       num+=arr[i];
   }
   double result=num/no_drinks;
   cout<<result;
}