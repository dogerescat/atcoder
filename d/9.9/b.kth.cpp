#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, q;  cin >> n >> q;
    vector<pair<ll, ll>> a(n+1);
    for(int i = 1; i <= n; i++) {
        ll b; cin >> b;
        a[i].first = b;
        a[i].second = a[i-1].second + (a[i].first - a[i-1].first) - 1;
    }
    for(int i = 0; i < q; i++) {
        ll k; cin >> k;
        if(k > a[n].second) {
            cout << a[n].first + (k - a[n].second) << endl;
        } else {
            int right = n;
            int left = 0;
            while(right - left > 1) {
                int mid = (right - left) / 2 + left;
                if(a[mid].second >= k) {
                    right = mid;
                } else {
                    left = mid;
                }
            }
            cout << a[right].first - (a[right].second - k) - 1 << endl;
        }
    }
}