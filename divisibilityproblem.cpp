#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,x;
        cin>>a>>b;
        if(a<b){
            x=b-a;
        }
        else{
            if(a%b==0){
                x=0;
            }
            else{
                x=b*((a/b)+1)-a;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}