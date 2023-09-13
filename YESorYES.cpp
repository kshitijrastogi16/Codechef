#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if((s[0]==89 || s[0]==121) && (s[1]==69 || s[1]==101) && (s[2]==83 || s[2]==115)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}