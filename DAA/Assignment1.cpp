#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
    ll n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    ll k=1;
    ll sum=0;
    ll t=0;
    for(ll i=1;i<=n;i++){
        t=t+4;
        if(i%2==1){
            t++;
            sum+=k;
            t+=2;
        }
        else{
            sum-=k;
            t+=2;
           
        }
        k+=2;
        t+=2;
    }
    cout<<"sum of the subsequence = "<<sum<<endl;
    cout<<"Number of operations are "<<" "<<t<<endl;
    }
return 0;
}
