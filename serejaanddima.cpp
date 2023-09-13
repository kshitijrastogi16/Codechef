#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s=0,d=0;
    int taken=n;
    int turn=0;
    int left=0,right=n-1;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while(taken!=0){
        if(turn%2==0){
            if(arr[left]>arr[right]){
                s=s+arr[left];
                left++;
            }
            else{
                s=s+arr[right];
                right--;
            }
        }
        else{
            if(arr[left]>arr[right]){
                d=d+arr[left];
                left++;
            }
            else{
                d=d+arr[right];
                right--;
            }
        }
        taken--;
        turn++;
    }
    cout<<s<<" "<<d<<endl;
    return 0;
}