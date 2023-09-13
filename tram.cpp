#include<iostream>
using namespace std;
int main(){
    int n,max=0,temp=0,sum=0;
    cin>>n;
    int a,b;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        sum=b-a;
        temp=temp+sum;
        if(temp>max){
            max=temp;
        }
    }
    cout<<max<<endl;
    return 0;
}