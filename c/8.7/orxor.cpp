#include <bits/stdc++.h>
using namespace std;

template<class T> void chmin(T& a, T b) {
    if(a > b) a = b;
}

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int ans = 2000000000;
    for(int bit = 0; bit < 1 << (n-1); bit++) {
        int xorr = 0;
        int orr = 0;
        for(int i = 0; i <= n; i++) {
            if(i < n) orr |= a[i];
            if(i == n || (bit >> i) & 1) xorr ^= orr, orr = 0;
        }
        chmin(ans, xorr);
    }
    cout << ans << endl;
}