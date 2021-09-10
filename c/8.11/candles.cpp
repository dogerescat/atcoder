#include <bits/stdc++.h>
using namespace std;

template<class T> void chmin(T &a, T b) {
    if(a > b) a = b;
}

int main() {
    int n, k; cin >> n >> k;
    vector<int> p;
    vector<int> m;
    p.push_back(0);
    m.push_back(0);
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        if(x > 0) {
            p.push_back(x);
        } else {
            m.push_back(-x);
        }
    }
    sort(p.begin(), p.end());
    sort(m.begin(), m.end());
    int ans = 1001001001;
    for(int i = 0; i < m.size(); i++) {
        if((k-i) >= 0 && p.size() > (k-i)) chmin(ans, m[i] * 2 + p[k-i]);
    }
    for(int i = 0; i < p.size(); i++) {
        if((k-i) >= 0 && m.size() > (k-i)) chmin(ans, p[i] * 2 + m[k-i]);
    }
    cout << ans << endl;
}