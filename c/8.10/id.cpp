#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<vector<pair<int, int>>> a(n);
    for(int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        a[x-1].push_back({y, i});
    }
    vector<string> ans(m);
    for(int i = 0; i < n; i++) {
        string s1 = to_string(i+1);
        while(s1.size() < 6) {
            s1 = "0" + s1;
        }
        sort(a[i].begin(), a[i].end());
        for(int j = 0; j < a[i].size(); j++) {
            string s2 = to_string(j+1);
            while(s2.size() < 6) {
                s2 = "0" + s2;
            }
            ans[a[i][j].second] = s1+s2;
        }
    }
    for(int i = 0; i < m; i++) {
        cout << ans[i] << endl;
    }
}