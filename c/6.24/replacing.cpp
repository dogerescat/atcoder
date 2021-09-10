#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, k;
    cin >> n >> k;
    ll ans = n % k;
    if(ans > k/2) ans -= k;
    cout << abs(ans) << endl;
}