#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[5005],x[5005],y[5005],z[5005];
    int a=0,b=0,c=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            x[a]=i;
            a++;
        }
        if(arr[i]==2){
            y[b]=i;
            b++;
        }
        if(arr[i]==3){
            z[c]=i;
            c++;
        }
    }
    int d=min({a,b,c});
    cout<<d<<endl;
    for(int i=0;i<d;i++){
        cout<<x[i]<<" "<<y[i]<<" "<<z[i]<<endl;
    }
    return 0;
}