#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s="I hate ";
    for(int i=2;i<=n;i++){
        if(i%2!=0){
            s=s+"that I hate ";        
        }
        if(i%2==0){
            s=s+"that I love ";
        }
    }
    cout<<s<<"it"<<endl;
    return 0;
}
