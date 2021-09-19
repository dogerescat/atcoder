#include <bits/stdc++.h>
using namespace std;

int main() {
    string x; cin >> x;
    int n; cin >> n;
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];
    vector<int> a(26);
    for(int i = 0; i < 26; i++) {
        a[x[i]-'a'] = i;
    }
    vector<int> memo(n);
    vector<pair<string, int>> ss;
    for(int i = 0; i < n; i++) {
        string t = "";
        int m = s[i].size();
        for(int j = 0; j < m; j++) {
            t += 'a' + a[s[i][j] - 'a'];
        }
        ss.push_back({t, i});
    }
    sort(ss.begin(), ss.end());
    for(auto i : ss) {
        cout << s[i.second] << endl;
    }
}