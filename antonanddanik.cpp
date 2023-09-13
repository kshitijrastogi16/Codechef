#include<iostream>
using namespace std;
int main(){
    int n,counta=0,countd=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            counta++;
        }
        if(s[i]=='D'){
            countd++;
        }
    }
    if(counta>countd){
        cout<<"Anton"<<endl;
    }
    else if(countd>counta){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
    return 0;
}