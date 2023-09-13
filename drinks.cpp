#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    float arr[n],sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=(arr[i])/(100);
        sum=sum+arr[i];
    }
    cout<<(sum/n)*100<<endl;
    return 0;
}