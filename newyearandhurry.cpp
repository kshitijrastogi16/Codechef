#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int tl=240-k;
    int i=0,count=0;
    int t=5*i;
    while(t<=tl && i<=n){
        i++;
        t=t+5*i;
        count++;
    }
    cout<<count-1<<endl;
    return 0;
}