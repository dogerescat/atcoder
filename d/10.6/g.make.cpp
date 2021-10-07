#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w; cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) cin >> a[i][j];
    }
    vector<pair<int, int>> ans1;
    vector<pair<int, int>> ans2;
    for(int i = 0; i < h-1; i++) {
        for(int j = 0; j < w; j++) {
            if(a[i][j] % 2 == 0) continue;
            --a[i][j]; ++a[i+1][j];
            ans1.push_back(make_pair(i+1, j+1));
            ans2.push_back(make_pair(i+2, j+1));
        }
    }
    for(int j = 0; j < w-1; j++) {
        if(a[h-1][j] % 2 == 0) continue;
        --a[h-1][j]; ++a[h-1][j+1];
        ans1.push_back(make_pair(h, j+1));
        ans2.push_back(make_pair(h, j+2));
    }
    int n = ans1.size();
    cout << n << endl;
    for(int i = 0; i < n; i++) {
        cout << ans1[i].first << " " << ans1[i].second << " " << ans2[i].first << " " << ans2[i].second << endl;
    }
}