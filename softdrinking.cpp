#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,q,e;
    cin>>n>>k>>l>>c>>d>>p>>q>>e;
    int a=(k*l)/q;
    int b=(c*d);
    int z=(p/e);
    int min;
    if (a <= b && a <= z){
        min=a;
    }
    else if (b <= a && b <= z){
        min=b;
    }
    else{
        min=z;
    }
    cout<<min/n<<endl;   
    return 0;
}