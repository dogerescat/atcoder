#include <bits/stdc++.h>
using namespace std;

template<class T> void chmin(T &a, T b) {
    if(a > b) a = b;
}

int main() {
    int h, w; cin >> h >> w;
    vector<vector<int>> c(10, vector<int> (10));
    for(int i = 0; i < 10; i++) for(int j = 0; j < 10; j++) cin >> c[i][j];
    for(int k = 0; k < 10; k++) {
        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < 10; j++) {
                chmin(c[i][j], c[i][k] + c[k][j]);
            }
        }
    }
    int ans = 0;
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            int a; cin >> a;
            if(a == 1 || a == -1) continue;
            ans += c[a][1];
        }
    }
    cout << ans << endl;
}
