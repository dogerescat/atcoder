#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t; cin >> s >> t;
    vector<vector<int>> f(26, vector<int>(26));
    int n = s.size();
    for(int i = 0; i < n; i++) {
        int a = s[i] - 'a';
        int b = t[i] - 'a';
        cout << a << endl;
        f[a][b] = 1;
    }
    for(int i = 0; i < 26; i++) {
        int cnt = 0;
        for(int j = 0; j < 26; j++) {
            if(f[i][j]) cnt++;
        }
        if(2 <= cnt) {
            cout << "No" << endl;
            return 0;
        }
    }
    for(int j = 0; j < 26; j++) {
        int cnt = 0;
        for(int i = 0; i < 26; i++) {
            if(f[i][j]) cnt++;
        }
        if(2 <= cnt) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}