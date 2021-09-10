#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] -= i+1;
    } 
    sort(a.begin(), a.end());
    int x;
    if(n % 2 == 0) x = (a[n/2] + a[n/2-1]) / 2;
    else x = a[n/2];
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        ans += abs(a[i] - x);
    }
    cout << ans << endl;
}