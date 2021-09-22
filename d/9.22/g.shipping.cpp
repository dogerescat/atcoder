#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, q; cin >> n >> m >> q;
    vector<int> w(n);
    vector<int> v(n);
    vector<int> x(m);
    for(int i = 0; i < n; i++) cin >> w[i] >> v[i];
    for(int i = 0; i < m; i++ ) cin >> x[i];
    for(int qu = 0; qu < q; qu++) {
        int l, r; cin >> l >> r;
        --l; --r;
        vector<int> as;
        for(int i = 0; i < m; i++) {
            if(i < l || i > r) as.push_back(x[i]);
        }
        sort(as.begin(), as.end());
        vector<bool> used(n);
        int ans = 0;
        for(auto a : as) {
            pair<int, int> best(-1,-1);
            for(int i = 0; i < n; i++) {
                if(used[i]) continue;
                if(w[i] > a) continue;
                best = max(best, pair<int, int>(v[i], i));
            }
            int i = best.second;
            if(i == -1) continue;
            used[i] = true;
            ans += v[i];
        }
        cout << ans << endl;
    }
}