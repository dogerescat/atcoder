#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = 1000000007;
ll calc(ll i, ll j) {
    if(j == 0) return 1;
    if(j % 2 == 0) {
        ll d = calc(i, j / 2);
        return (d * d) % MOD;
    } else {
        return i * (calc(i, j - 1)) % MOD;
    }
    // ll tmp=1;
	// while(j){
	// 	if(j%2)	tmp=tmp*i%MOD;
	// 	i=i*i%MOD;
	// 	j/=2;
	// }
	// return tmp;
}
int main() {
    ll h, w;
    cin >> h >> w;
    ll a = 1;
    ll b = 1;
    ll c = 1;
    ll A = (h - 1) + (w - 1);
    for(int i = 1; i <= A; i++) {
        a = (a * i) % MOD;
    }
    for(int i = 1; i <= h-1; i++) {
        b = (b * i) % MOD;
    }
    for(int i = 1; i <= w-1; i++) {
        c =(c * i) % MOD;
    }
    cout << (a % MOD) * calc(c * b % MOD, MOD-2) % MOD << endl;
}