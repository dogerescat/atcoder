#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<char>> a(h, vector<char>(w));
    for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) {
        cin >> a[i][j];
    }
    int ans = 0;
    for(int i = 0; i < h - 1; i++) {
        for(int j = 0; j < w - 1; j++) {
            int cnt = 0;
            if(a[i][j] == '#') cnt++;
            if(a[i+1][j] == '#') cnt++;
            if(a[i][j+1] == '#') cnt++;
            if(a[i+1][j+1] == '#') cnt++;
            if(cnt == 1 || cnt == 3) ans++;
        }
    } 
    cout << ans << endl;
}