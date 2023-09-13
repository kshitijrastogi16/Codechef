#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,count=0;
    cin>>a;
    string s;
    cin>>s;
    for(int i=0;i<a;i++){
        if(97<=s[i] && s[i]<=122){
            s[i]=s[i]-32;
        }
    }
    sort(s.begin(),s.end());
    for(int i=0;i<a;i++){
        if(s[i]!=s[i+1]){
            count++;
        }
    }
    if(count==26){
        cout<<"YES"<<endl;;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}