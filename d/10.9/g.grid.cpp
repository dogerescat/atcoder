#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w, n; cin >> h >> w >> n;
    vector<vector<int>> ans(h, vector<int>(w));
    int index = 0;
    int t = 0;
    for(int i = 1; i <= n; i++) {
        int a; cin >> a;
        while(a) {
            if(index >= w) {
                t++;
                index = 0;
            }
            ans[t][index] = i;
            --a;
            index++;
        } 
    }
    for(int i = 0; i < h; i++) {
        if(i % 2 != 0) reverse(ans[i].begin(), ans[i].end());
    }
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cout << ans[i][j] << ' ';
        }
        cout << endl;
    }
}