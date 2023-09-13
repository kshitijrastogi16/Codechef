#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int r=x%5;
    if(r==0){
        cout<<x/5<<endl;
    }
    else{
        cout<<(x/5)+1<<endl;
    }
    return 0;
}