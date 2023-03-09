#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) {
if (b == 0) return a;
return gcd(b, a % b);
}

int main() {
ll n;
cout << "Enter the number of Fibonacci numbers to check: ";
cin >> n;
ll f1 = 1, f2 = 1;
cout << "gcd(" << f1 << ", " << f2 << ") = " << gcd(f1, f2) << endl;
for (ll i = 3; i <=n; i++) {
ll f3 = f1 + f2;
cout << "gcd(" << f2 << ", " << f3 << ") = " << gcd(f2, f3) << endl;
f1 = f2;
f2 = f3;
}
return 0;
}
