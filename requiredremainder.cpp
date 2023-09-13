#include<iostream>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
        int x,y,n;
        cin>>x>>y>>n;
        while(n%x!=y){
            n--;
        }
        cout<<n<<endl;
    }
    return 0;
}