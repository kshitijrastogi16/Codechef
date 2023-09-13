#include <iostream>
using namespace std;
int main(){
    int arr[5][5],ci,cj;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j]==1){
                ci=i;
                cj=j;
            }
        }
    }
        int steps = abs(2-ci) + abs(2-cj);
        cout<<steps<<endl;
    return 0;
}