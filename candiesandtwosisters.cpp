#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        if(n<=2){
            cout<<"0"<<endl;
        }
        if(n>2){
            if(n%2==0){
                cout<<(n/2)-1<<endl;
            }
            else{
                cout<<n/2<<endl;
            }
        }
    }
    return 0;
}