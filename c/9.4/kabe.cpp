#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int INF = 1001001001;

const int dx[4] = {-1, 0, 1, 0};
const int dy[4] = {0, -1, 0, 1};

template<class T> bool chmin(T &a, T b) {
    if(a > b) {
        a = b;
        return true;
    }
    return false;
}

int main() {
    int h, w, t; cin >> h >> w >> t;
    vector<vector<char>> G(h, vector<char> (w));
    pair<int, int> s, g;
    for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) {
        cin >> G[i][j];
        if(G[i][j] == 'S') {
            s.first = i;
            s.second = j;
        }
        if(G[i][j] == 'G') {
            g.first = i;
            g.second = j;
        }
    }

    int left = 1;
    int right = t;
    while(right - left > 1) {
        ll mid = (right - left) / 2 + left;
        vector<vector<ll>> dist(h, vector<ll>(w, INF));
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> que;
        dist[s.first][s.second] = 0;
        que.push({dist[s.first][s.second], s});
        while(!que.empty()) {
            pair<int, int> v = que.top().second;
            ll d = que.top().first;
            que.pop();
            for(int j = 0; j < 4; j++) {
                if(v.first + dy[j] >= h || v.second + dx[j] >= w || v.first + dy[j] < 0 || v.second + dx[j] < 0) continue;
                pair<int, int> vv = {v.first + dy[j], v.second + dx[j]};
                if(G[v.first + dy[j]][v.second + dx[j]] == '#') {
                    if(chmin(dist[v.first + dy[j]][v.second + dx[j]], d + mid)) {
                        que.push({dist[v.first + dy[j]][v.second + dx[j]], vv});
                    }
                } else {
                    if(chmin(dist[v.first + dy[j]][v.second + dx[j]], d + 1)) {
                        que.push({dist[v.first + dy[j]][v.second + dx[j]], vv});
                    }
                }
            }
        }
        if(dist[g.first][g.second] > t) {
            right = mid;
        } else {
            left = mid;
        }
    }
    cout << left << endl;
}