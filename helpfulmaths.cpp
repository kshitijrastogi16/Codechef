#include<iostream>
using namespace std;
int  main(){
    int count1=0,count2=0,count3=0,countp=0;
    string s;
    cin>>s;
    string ans = "" ;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1')
        count1++;
        if(s[i]=='2')
        count2++;
        if(s[i]=='3')
        count3++;
        if(s[i]=='+')
        countp++;
    }
    int sum = count1+count2+count3;
    for(int i=0;i<count1;i++){
        ans+="1";
    }
    for(int i=0;i<count2;i++){
        ans+="2";
    }
    for(int i=0;i<count3;i++){
        ans+="3";
    }
    cout<<ans[0];
    for(int i=1;i<sum;i++){
        cout<<"+"<<ans[i];
    }
    cout<<endl;
    return 0;
}
