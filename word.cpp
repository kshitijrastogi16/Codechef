#include<iostream>
using namespace std;
int main(){
    int countu=0,countl=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(65<=s[i] && s[i]<=90){
            countu++;
        }
        if(97<=s[i] && s[i]<=122){
            countl++;
        }
    }
    if(countu>countl){
        for(int i=0;i<s.size();i++){
            if(97<=s[i] && s[i]<=122){
                s[i]=s[i]-32;
            }
        }
    }
    else{
        for(int i=0;i<s.size();i++){
            if(65<=s[i] && s[i]<=90){
                s[i]=s[i]+32;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}