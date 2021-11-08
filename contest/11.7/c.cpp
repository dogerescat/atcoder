#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void func(vector<vector<int>> &a, vector<int> &dist, int v, ll &ans) {
    ans += a[v][0];
    int n = a[v].size();
    for(int i = 1; i < n; i++) {
        if(dist[a[v][i]] != -1) continue;
        dist[a[v][i]] = 1;
        func(a, dist, a[v][i], ans);
    }
}

int main() {
    int n; cin >> n;
    vector<vector<int>> a(n);
    for(int i = 0; i < n; i++) {
        int t, k; cin >> t >> k;
        a[i].push_back(t);
        for(int j = 1; j <= k; j++) {
            int x; cin >> x;
            a[i].push_back(x-1); 
        }
    }
    vector<int> dist(n, -1);
    ll ans = 0;
    func(a, dist, n-1, ans);
    cout << ans << endl;
}