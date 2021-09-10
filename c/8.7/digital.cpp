#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w; cin >> h >> w;
    vector<vector<char>> s(h, vector<char> (w));
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cin >> s[i][j];
        }
    }
    int ans = 0;
    for(int i = 1; i < h; i++) for(int j = 1; j < w; j++) {
        int cnt = 0;
        if(s[i-1][j] == '.') cnt++;
        if(s[i][j-1] == '.') cnt++;
        if(s[i-1][j-1] == '.') cnt++;
        if(s[i][j] == '.') cnt++;
        if(cnt == 3 || cnt == 1) ans++;
    }
    cout << ans << endl;
}