#include<iostream>
using namespace std;
int main(){
    int a,b,count=0;
    cin>>a>>b;
    if(a==b){
        cout<<"1"<<endl;
    }
    if(a>b){
        cout<<"0"<<endl;
    }
    if(b>a){
        for(int i=0;i<100;i++){
            a=3*a;b=2*b;
            count++;
            if(a>b)
            break;
        }
        cout<<count<<endl;
    }
    return 0;
}