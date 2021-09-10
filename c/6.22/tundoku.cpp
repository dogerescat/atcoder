#include <bits/stdc++.h>
using namespace std;

template<class T> void chmax(T& a, T b) {
    if(a < b) {
        a = b;
    }
}

int main() {
    int n, m, k; cin >> n >> m >> k;
    vector<int> a(n);
    vector<int> b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    vector<long long> totalA(n+1);
    vector<long long> totalB(m+1);
    totalA[0] = 0; totalB[0] = 0;
    for(int i = 0; i < n; i++) {
        totalA[i+1] = totalA[i] + a[i];
    }
    for(int i = 0; i < m; i++) {
        totalB[i+1] = totalB[i] + b[i];
    }
    int ans = 0;
    int ok = m;
    for(int i = 0; i < n+1; i++) {
        while (ok >= 0 && k < totalA[i] + totalB[ok]) ok--;
        if(ok >= 0) chmax(ans, i + ok);
    }
    cout << ans << endl;
}