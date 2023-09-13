#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<"0"<<endl;
        }
        if(a>b){
            int q=a-b;
            if(q%10!=0){
                cout<<(q/10)+1<<endl;
            }
            else{
                cout<<q/10<<endl;
            }
        }
        if(b>a){
            int h=b-a;
            if(h%10!=0){
                cout<<(h/10)+1<<endl;
            }
            else{
                cout<<h/10<<endl;
            }
        }
    }
    return 0;
}