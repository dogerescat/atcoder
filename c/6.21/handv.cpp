#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w, k; cin >> h >> w >> k;
    vector<vector<char>> a(h, vector<char> (w));
    for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) {
        cin >> a[i][j];
    }
    int ans = 0;
    for(int bith = 0; bith < 1 << h; bith++) {
        for(int bitw = 0; bitw < 1 << w; bitw++ ) {
            int cnt = 0;
            for(int i = 0; i < h; i++) {
                for(int j = 0; j < w; j++) {
                    if(bith & 1 << i || bitw & 1 << j) continue;
                    if(a[i][j] == '#') cnt++;
                }
            }
            if(cnt == k) ans++;
        }
    }
    cout << ans << endl;
}