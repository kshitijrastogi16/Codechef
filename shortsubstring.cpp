#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s,a="";
        cin>>s;
        int l=s.length();
        for (int i=1;i<l-1;i+=2) {
			a+=s[i];
		}
        cout<<s[0]<<a<<s[l-1]<<endl;
    }
    return 0;
}