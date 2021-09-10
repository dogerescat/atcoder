#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<ll> T(n);
    vector<ll> A(n);
    for(int i = 0; i < n; i++) cin >> T[i] >> A[i];
    ll x = 1; ll y = 1;
    for(int i = 0; i < n; i++) {
        ll r = max((ll)((x + (T[i] - 1)) / T[i]), (ll)((y + (A[i] - 1)) / A[i]));
        x = r * T[i]; y = r * A[i];
    }
    cout << x + y << endl;
}