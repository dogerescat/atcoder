#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<char>>;

vector<vector<int>> func(Graph &a, int r, int c, int sx, int sy) {
    vector<vector<int>> dist(r, vector<int>(c, -1));
    queue<pair<int, int>> que;
    dist[sx][sy] = 0;
    que.push({sx, sy});
    while(!que.empty()) {
        pair<int, int> v = que.front();
        que.pop();
        if(a[v.first+1][v.second] == '.' && dist[v.first+1][v.second] == -1) {
            que.push({v.first+1, v.second});
            dist[v.first+1][v.second] = dist[v.first][v.second] + 1;
        }
        if(a[v.first][v.second+1] == '.' && dist[v.first][v.second+1] == -1) {
            que.push({v.first, v.second+1});
            dist[v.first][v.second+1] = dist[v.first][v.second] + 1;
        }
        if(a[v.first-1][v.second] == '.' && dist[v.first-1][v.second] == -1) {
            que.push({v.first-1, v.second});
            dist[v.first-1][v.second] = dist[v.first][v.second] + 1;
        }
        if(a[v.first][v.second-1] == '.' && dist[v.first][v.second-1] == -1) {
            que.push({v.first, v.second-1});
            dist[v.first][v.second-1] = dist[v.first][v.second] + 1;
        }
    }
    return dist;
}

int main() {
    int r, c, sx, sy, gx, gy; 
    cin >> r >> c >> sx >> sy >> gx >> gy;
    Graph a(r, vector<char> (c));
    for(int i = 0; i < r; i++) for(int j = 0; j < c; j++) {
        cin >> a[i][j];
    }
    vector<vector<int>> dist = func(a, r, c, sx-1, sy-1);
    cout << dist[gx-1][gy-1] << endl;
}