#include<iostream>
#include<string>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    string a,b,c;
    cin>>a>>b>>c;
    string sum=a+b;
    sort(sum.begin(),sum.end());
    sort(c.begin(),c.end());
    if(sum==c){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}