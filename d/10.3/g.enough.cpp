#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int right = 0;
    ll res = 0;
    ll sum = 0;
    for(int left = 0; left < n; left++) {
        while(right < n && sum + a[right] < k) { 
            sum += a[right];
            right++;
        }
        res += (n - right);
        if(left == right) right++;
        else sum -= a[left];
    }
    cout << res << endl;
}