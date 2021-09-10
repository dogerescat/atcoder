#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<vector<pair<int, int>>> a(n);
    for(int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        a[x-1].push_back({y, i});
    }
    vector<string> s(m);
    for(int i = 0; i < n; i++) {
        sort(a[i].begin(), a[i].end());
        string x = to_string(i+1);
        while(x.size() < 6) {
            x = '0' + x;
        }
        for(int j = 0; j < a[i].size(); j++) {
            string y = to_string(j+1);
            while(y.size() < 6) {
                y = '0' + y;
            }
            s[a[i][j].second] = x + y;
        }
    }
    for(int i = 0; i < m; i++) {
        cout << s[i] << endl;
    }
}