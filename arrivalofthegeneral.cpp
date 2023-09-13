#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    if(arr[0]==max && arr[n-1]==min){
        cout<<"0"<<endl;
    }
    else{
        for(int i=0;i<n-1;i++){
            for(int j=1;j<n;j++){
                if(arr[i]<arr[j]){
                    swap(arr[i],arr[j]);
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}