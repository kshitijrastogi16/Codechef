#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string one,two;
    cin>>one>>two;
    int l = one.length();
    for(int i=0;i<l;i++){
        if(one[i]>=97){
            one[i]=one[i]-32;
        }
        if(two[i]>=97){
            two[i]=two[i]-32;
        }
    }
    if(one==two){
        cout<<"0"<<endl;
    }
    else if(one>two){
        cout<<"1"<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    return 0;
}