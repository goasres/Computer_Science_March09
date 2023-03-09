#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b, ll &t) {
if (b == 0) return a;
t+=1;
return gcd(b, a % b,t);
}

int main() {
int tt;
cin>>tt;
while(tt--){
ll n;
cout << "Enter the number of Fibonacci numbers to check: ";
cin >> n;
ll t=0;
ll f1 = 1, f2 = 1;
cout << "gcd(" << f1 << ", " << f2 << ") = " << gcd(f1, f2,t) << endl;
for (ll i = 3; i <=n; i++) {
t+=4;
ll f3 = f1 + f2;
t+=2;
cout << "gcd(" << f2 << ", " << f3 << ") = " << gcd(f2, f3,t) << endl;
f1 = f2;
f2 = f3;
t+=2;
}
cout<<t<<endl;
}
return 0;
}