#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    ll sum = 0;
    int x = 0;
    for(int i = 0; i < n; i++) {
        sum += abs(a[i]-x);
        x = a[i];
    }
    sum += abs(x);
    for(int i = 0; i < n; i++) {
        int A = 0;
        if(i) A = a[i-1];
        int B = a[i];
        int C = 0;
        if(i != n-1) C = a[i+1];
        ll ans = sum;
        ans -= abs(B - A);
        ans -= abs(C - B);
        ans += abs(A - C);
        cout << ans << endl;
    }
}