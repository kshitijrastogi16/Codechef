#include <iostream>
using namespace std;
int main(){
    int t,count=0;
    cin>>t;
    while(t--){
        int arr[3],count1=0,count0=0;
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        for(int i=0;i<3;i++){
            if(arr[i]==1){
                count1++;
            }
            else if(arr[i]==0){
                count0++;
            }
        }
        if(count1>count0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}