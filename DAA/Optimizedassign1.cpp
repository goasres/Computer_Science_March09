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
    int t=0;
    if(n%2==0){
        cout<<"sum of the subsequence = "<<-n<<endl;
        t+=2;
    }
    else{
        cout<<"sum of the subsequence = "<<n<<endl;
        t+=2;
    }
    cout<<"number of operations are "<<t<<endl;
    }
return 0;
}