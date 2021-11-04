#include <bits/stdc++.h>
using namespace std;

const int x[4] = {0, -1, 0, -1};
const int y[4] = {-1, 0, 0, -1};
int main() {
    int h, w; cin >> h >> w;
    vector<vector<char>> a(h, vector<char> (w));
    for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) cin >> a[i][j];
    int ans = 0;
    for(int i = 1; i < h; i++) {
        for(int j = 1; j < w; j++) {
            int cnt = 0;
            for(int k = 0; k < 4; k++) {
                if(a[i+y[k]][j+x[k]] == '#') cnt++;
            }
            if(cnt == 1 || cnt == 3) ans++;
        }
    }
    cout << ans << endl;
}