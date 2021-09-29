#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;

vector<int> x = {1, 0, -1, 0};
vector<int> y = {0, 1, 0, -1};

int main() {
    int H, W; cin >> H >> W;
    vector<vector<char>> a(H+2, vector<char>(W+2, '#'));
    for(int i = 1; i <= H; i++) for(int j = 1; j <= W; j++) cin >> a[i][j];
    int ans = 0;
    for(int i = 1; i <= H; i++) for(int j = 1; j <= W; j++) {
        if(a[i][j] == '#') continue;
        vector<vector<int>> dist(H+1, vector<int>(W+1, -1));
        dist[i][j] = 0;
        queue<P> que;
        que.push(make_pair(i, j));
        while(!que.empty()) {
            P v = que.front(); que.pop();
            for(int k  = 0; k < 4; k++) {
                if(a[v.first + y[k]][v.second + x[k]] == '#' || dist[v.first + y[k]][v.second + x[k]] != -1) continue;
                dist[v.first + y[k]][v.second + x[k]] = dist[v.first][v.second] + 1;
                que.push(make_pair(v.first + y[k], v.second + x[k]));
            }
        }
        for(int h = 1; h <= H; h++) for(int w = 1; w <= W; w++) {
            ans = max(ans, dist[h][w]);
        }
    }
    cout << ans << endl;
}