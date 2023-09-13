#include<iostream>
using namespace std;
int main(){
    int n,h,sum=0;
    cin>>n>>h;
    int x;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(x<=h){
            sum=sum+1;
        }
        else if(x>h){
            sum=sum+2;
        }
    }
    cout<<sum<<endl;
    return 0;
}