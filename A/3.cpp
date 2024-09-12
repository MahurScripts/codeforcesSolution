#include <iostream>
#include <string>
using namespace std;


int main() {
    string name;
    cin>>name;
    int dup=0;
    for(int i=0;i<name.length();i++){
        for(int j=i+1;j<name.length();j++){
            if(name[i]==name[j]){
                dup++;
                break;
            }
        }
    }
    
    if((name.length()-dup)%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
}
