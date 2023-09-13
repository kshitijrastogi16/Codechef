#include<iostream>
using namespace std;
int main(){
    int n,count=1;
    cin>>n;
    int s1[n];
    for(int i=0;i<n;i++){
        cin>>s1[i];
    }
    for(int i=0;i<n-1;i++){
        if(s1[i]!=s1[i+1]){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}