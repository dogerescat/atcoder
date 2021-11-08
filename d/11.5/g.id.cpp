#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<vector<pair<int, int>>> a(n);
    for(int i = 0; i < m; i++) {
        int p, y; cin >> p >> y;
        p--;
        a[p].push_back(make_pair(y, i));
    }
    for(int i = 0; i < n; i++) sort(a[i].begin(), a[i].end());
    vector<pair<int, int>> b(m);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < a[i].size(); j++) {
            b[a[i][j].second].first = i+1;
            b[a[i][j].second].second = j+1;
        }
    }
    for(int i = 0; i < m; i++) {
        string s1 = to_string(b[i].first);
        while(s1.size() < 6) {
            s1 = '0' + s1;
        }
        string s2 = to_string(b[i].second);
        while(s2.size() < 6) {
            s2 = '0' + s2;
        }
        cout << s1 + s2 << endl;
    } 
}