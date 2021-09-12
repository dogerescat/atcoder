#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<vector<int>> s(n, vector<int> (n));
    vector<vector<int>> t(n, vector<int> (n));
    set<pair<int, int>> sp;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> s[i][j];
            if(s[i][j] == '#') sp.insert({i, j});
        }
    }
    set<pair<int, int>> tp;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> t[i][j];
            if(t[i][j] == '#') tp.insert({i, j});
        }
    }
    vector<pair<int, int>> v;
    for(auto i : sp) v.push_back(i);
    for(int i = 0; i < 4; i++) {
        for(auto j : v) {
            j = {(n+1-j.second), j.first};
        }
        for(int j = 0; j < n; j++) {
            for(auto k : sp) {
            
            }
        }
        for(int j = n; j > 0; j--) {
            
        }
    }
}