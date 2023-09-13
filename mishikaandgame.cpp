#include<iostream>
using namespace std;
int main(){
    int t,countm=0,countc=0;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a>b){
            countm++;
        }
        if(b>a){
            countc++;
        }
    }
    if(countm>countc){
        cout<<"Mishka"<<endl;
    }
    if(countc>countm){
        cout<<"Chris"<<endl;
    }
    if(countc==countm){
        cout<<"Friendship is magic!^^"<<endl;
    }
    return 0;
}