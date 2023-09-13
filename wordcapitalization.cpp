#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(65<=s[0] && s[0]<=90){
        cout<<s;
    }
    else{
        s[0]=s[0]-32;
        cout<<s;
    }
    return 0;
}