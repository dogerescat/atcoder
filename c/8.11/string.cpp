#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t; cin >> s >> t;
    vector<vector<int>> v(26);
    vector<vector<int>> w(26);
    for(int i = 0; i < t.size(); i++) {
        v[t[i] - 97].push_back(i);
    }
    for(int i = 0; i < s.size(); i++) {
        w[s[i] - 97].push_back(i);
    }
    bool okt = true;
    for(int i = 0; i < 26; i++) {
        if(v[i].size() < 2) continue;
        for(int j = 0; j < v[i].size()-1; j++) {
            if(s[v[i][j]] != s[v[i][j+1]]) okt = false;
        }
    }
    bool oks = true;
    for(int i = 0; i < 26; i++) {
        if(w[i].size() < 2) continue;
        for(int j = 0; j < w[i].size()-1; j++) {
            if(t[w[i][j]] != t[w[i][j+1]]) oks = false;
        }
    }
    if(okt && oks) cout << "Yes" << endl;
    else cout << "No" << endl;
}