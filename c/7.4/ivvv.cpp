#include <bits/stdc++.h>
using namespace std;

template<class T> void chmin(T &a, T b) {
    if(a > b) a = b;
}

int main() {
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    vector<map<int, int>> m(2);
    for(int i = 0; i < n; i++) m[i%2][v[i]]++;
    vector<vector<pair<int, int>>> p(2);
    for(int i = 0; i < 2; i++) {
        for(auto j : m[i]) {
            p[i].push_back({j.second, j.first});
        }
        sort(p[i].begin(), p[i].end(), greater<pair<int, int>>());
    }
    if(p[0][0].second != p[1][0].second) {
        cout << n - p[0][0].first - p[1][0].first << endl;
        return 0;
    }
    if(p[0].size() == 1 && p[1].size() == 1) {
        cout << n/2 << endl;
        return 0;
    }
    int ans = 1e9;
    if(2 <= p[0].size()) chmin(ans, n - p[0][1].first - p[1][0].first);
    if(2 <= p[1].size()) chmin(ans, n - p[0][0].first - p[1][1].first);
    cout << ans << endl;
}