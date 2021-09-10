#include <bits/stdc++.h>
using namespace std;

template<class T> void chmax(T &a, T b) {
    if(a < b) a = b;
}

int main() {
    int n, m, q; cin >> n >> m >> q;
    vector<int> A(m);
    for(int i = 1; i <= m; i++) A[i-1] = i;
    vector<int> a(q);
    vector<int> b(q);
    vector<int> c(q);
    vector<int> d(q);
    for(int i = 0; i < q; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];
    int ans = 0;
    for(int bit = 0; bit < (1 << m); bit++) {
        vector<int> e;
        int cnt = 0;
        for(int i = 0; i < m; i++) {
            if(bit & 1 << i) {
                e.push_back(A[i]);
            }
        }
        if(e.size() != n) continue;
        for(int i = 0; i < q; i++) {
            if((e[b[i]-1] - e[a[i]-1]) == c[i]) cnt += d[i];
        }
        chmax(ans, cnt);
    }
    cout << ans << endl;
}