#include<iostream>
using namespace std;
int n,x;int ans[102];
int main(){ 
    cin>>n; 
    for(int i=1;i<=n;i++){
        cin>>x;
        ans[x]=i;
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}