#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,p,q;
    bool a;
    cin>>n;
    cin>>p;
    int pl[p];
    for(int i=1;i<=p;i++){
        cin>>pl[i];
    }
    sort(pl,pl+p);
    cin>>q;
    int ql[q];
    for(int i=1;i<=q;i++){
        cin>>ql[i];
    }
    sort(ql,ql+q);
    for(int i=1;i<=n;i++){
        if(n<pl[i]){
            a=true;
        }
        if(n<ql[i]){
            a=true;
        }
        else if(pl[i]==n || ql[i]==n){
            a=true;
            break;
        }
        else{
            a=false;
            break;
        }
    }
    if(a==true){
        cout<<"I become that guy."<<endl;
    }
    if(a==false){
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}