#include<iostream>
using namespace std;
int main(){
    int year,a,b,c,d;
    cin>>year;
    year=year+1;
    while(1){
        a=year%10;
        b=(year/10)%10;
        c=((year/10)/10)%10;
        d=(((year/10)/10)/10)%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            break;
        }
        else{
            year++;
        }
    }
    cout<<year<<endl;
    return 0;
}