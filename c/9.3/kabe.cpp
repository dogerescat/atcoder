#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int dx[2] = {0, 1};
const int dy[2] = {1, 0};

void dfs(vector<vector<char>> &G, vector<vector<bool>> &seen, int h, int w,  pair<int, int> s, pair<int, int> g, int deep, int &d, int value, int &m) {
    seen[s.first][s.second] = true;
    if(s.first == g.first && s.second == g.second && deep == d) {
        m = min(m, value);
        return;
    }
    if(G[s.first][s.second] == '#') value++;
    for(int i = 0; i < 2; i++) {
        int nh = s.first + dy[i];
        int nw = s.second + dx[i];
        if(nw >= w || nh >= h) continue;
        if(seen[nh][nw]) continue;
        dfs(G, seen, h, w, {nh, nw}, g, deep+1, d, value, m);
    }
    return;
}

int main() {
    int h, w, t; cin >> h >> w >> t;
    vector<vector<char>> G(h, vector<char>(w));
    pair<int, int> s;
    pair<int, int> g;
    vector<vector<bool>> seen(h, vector<bool>(w));
    for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) {
        cin >> G[i][j];
        if(G[i][j] == 'S') s.first = i, s.second = j;
        if(G[i][j] == 'G') g.first = i, g.second = j;
    }
    int keiro = abs(g.first - s.first + g.second - s.second);
    int m = 1001001001;
    dfs(G, seen, h, w, s, g, 0, keiro, 0, m);
    int ans = (t - (keiro - m)) / m;
    cout << ans << endl;
}