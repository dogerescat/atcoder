#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W; cin >> H >> W;
    vector<string> S(H);
    for(int i = 0; i < H; i++) cin >> S[i];
    vector<vector<int>> cnt(H, vector<int>(W));
    for(int h = 0; h < H; h++) {
        vector<int> done(W);
        for(int w = 0; w < W; w++) {
            if(S[h][w] == '#') continue;
            if(done[w]) continue;
            int l = 0;
            while(w + l < W) {
                if(S[h][w+l] == '#') break;
                l++;
            }
            for(int i = 0; i < l; i++) {
                cnt[h][w+i] += l;
                done[w+i] = 1;
            }
        }
    }

    for(int w = 0; w < W; w++) {
        vector<int> done(H);
        for(int h = 0; h < H; h++) {
            if(S[h][w] == '#') continue;
            if(done[h]) continue;
            int l = 0;
            while(h + l < H) {
                if(S[h+l][w] == '#') break;
                l++;
            }
            for(int i = 0; i < l; i++) {
                cnt[h+i][w] += l;
                done[h+i] = 1;
            }
        }
    }
    int ans = 0;
    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            ans = max(ans, cnt[i][j] - 1);
        }
    }
    cout << ans << endl;
}