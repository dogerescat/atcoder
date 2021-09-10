#include <bits/stdc++.h>
using namespace std;

template<class T> void chmin(T &a, T b) {
    if(a > b) a = b; 
}

int main() {
    int n; cin >> n;
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];
    vector<vector<int>> a(n, vector<int>(26));
    for(int i = 0; i < n; i++) {
        for(auto c : s[i]) {
            a[i][c - 97]++;
        }
    }
    vector<int> m(26, 100);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 26; j++) {
            chmin(m[j], a[i][j]);
        }
    }
    string ans = "";
    for(int i = 0; i < 26; i++) {
        for(int j = 0; j < m[i]; j++) {
            ans += 'a' + i;
        }
    }
    cout << ans << endl;
}