#include <bits/stdc++.h>
using namespace std;
using ll = long long;

template<class T> void chmax(T &a, T b) {
    if(a < b) a = b;
}

int main() {
    int n, m, k; cin >> n >> m >> k;
    vector<int> a(n);
    vector<int> b(m);
    vector<ll> aa(n+1);
    vector<ll> bb(m+1);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    aa[0] = 0;
    for(int i = 0; i < n; i++) aa[i+1] = aa[i] + a[i];
    bb[0] = 0;
    for(int i = 0; i < m; i++) bb[i+1] = bb[i] + b[i];
    int ans = 0;
    for(int i = 0; i < n+1; i++) {
        if(aa[i] > k) break;
        int left = 0; int right = m+1;
        while(right-left > 1) {
            int mid = (left + right) / 2;
            if((bb[mid]) <= k - aa[i]) {
                left = mid;
            } else {
                right = mid;
            }
        }
        chmax(ans, i + left);
    }
    cout << ans << endl;
}