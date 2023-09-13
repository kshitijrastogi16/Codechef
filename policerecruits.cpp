#include<iostream>
using namespace std;
int main(){
    int n,sum=0,countc=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=-1){
            sum=sum+arr[i];
        }
        if(arr[i]==-1){
            if(sum>0){
                sum--;
            }
            else if(sum==0){
                countc++;
            }
        }
    }
    cout<<countc<<endl;
    return 0;
}