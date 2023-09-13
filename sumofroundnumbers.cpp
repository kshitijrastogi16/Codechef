#include<iostream>
#include<math.h> 
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,total=0,arr[100],a=0;
        cin>>n;
        if(n%10000==0 || n%10==n){
            cout<<1<<endl<<n<<endl;
        }
        else{
            while(n>0){
                arr[a]=n%10;
                if(arr[a]==0){
                    total=total;
                }
                else{
                    total++;
                }
                a++;
                n=n/10;
            }
            cout<<total<<endl;
            for(int i=0;i<a;i++){
                if(arr[i]!=0){
                    cout<<arr[i]*pow(10,i)<<"\t";
                }
            }
        }
    }
    return 0;
}