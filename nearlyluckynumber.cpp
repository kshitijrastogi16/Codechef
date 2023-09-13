#include<iostream>
using namespace std;
int main(){
    int countl=0;
    string n;
    cin>>n;
    for(int i=0;i<n.size();i++){
        if(n[i]=='4' || n[i]=='7'){
            countl++;
        }
    }
    if(countl==4 || countl==7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}