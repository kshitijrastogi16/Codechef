#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a<=b){
        cout<<a<<" ";
        cout<<(b-a)/2<<endl;
    }
    else if(b<a){
        cout<<b<<" ";
        cout<<(a-b)/2<<endl;
    }
    return 0;
}