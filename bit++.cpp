#include<iostream>
#include<bits/stdc++.h> 
using namespace std; 
int main (){ 
    int n,X=0; 
    cin>>n; 
    while(n--){ 
        string s; 
        cin>>s; 
        if(s == "X++"){ 
            X=X; 
            X=X+1; 
        } 
        if(s == "++X"){
            X=X+1; 
            X=X; 
        } 
        if(s == "X--"){ 
            X=X; 
            X=X-1; 
        } 
        if(s == "--X"){ 
            X=X-1; 
            X=X; 
        } 
    } 
    cout<<X<<endl; 
    return 0; 
}