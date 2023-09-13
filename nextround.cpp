#include<iostream>
using namespace std;
int main(){
    int n,k,countn=0,countz=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp=arr[k-1];
    for(int i=0;i<n;i++){
        if(temp!=0){
            if(arr[i]>=temp){
                countn++;
            }
        }
        else if(temp==0){
            if(arr[i]!=0){
                countz++;
            }
        }
    }
    if(temp!=0){
        cout<<countn<<endl;
    }
    if(temp==0){
        cout<<countz<<endl;
    }
    return 0;
}