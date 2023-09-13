#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[4];
        for(int i=0;i<4;i++){
            cin>>arr[i];
        }
        int a=arr[0],count=0;
        sort(arr,arr+4);
        for(int i=0;i<4;i++){
            if(arr[i]>a){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}