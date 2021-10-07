#include <bits/stdc++.h>
using namespace std;

vector<int> x = {0, 1, 0, -1};
vector<int> y = {1, 0, -1, 0};
int main() {
    int h, w; cin >> h >> w;
    vector<vector<char>> c(h, vector<char> (w));
    int cnt = 0;
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cin >> c[i][j];
            if(c[i][j] == '.') cnt++;
        }
    }
    vector<vector<int>> a(h, vector<int>(w, -1));
    a[0][0] = 0;
    queue<pair<int, int>> que;
    que.push(make_pair(0, 0));
    while(!que.empty()) {   
        auto v = que.front();
        que.pop();
        for(int i = 0; i < 4; i++) {
            if(v.first + y[i] < 0 || v.first + y[i] >= h) continue;
            if(v.second + x[i] < 0 || v.second + x[i] >= w) continue;
            if(c[v.first+y[i]][v.second+x[i]] == '#') continue;
            if(a[v.first+y[i]][v.second+x[i]] != -1) continue;
            a[v.first + y[i]][v.second + x[i]] = a[v.first][v.second] + 1;
            que.push(make_pair(v.first+y[i], v.second+x[i]));
        }
    }
    if(a[h-1][w-1] == -1) {
        cout << -1 << endl;
        return 0;
    }
    cout << cnt - a[h-1][w-1] - 1 << endl;
}