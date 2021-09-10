#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w; cin >> h >> w;
    vector<vector<char>> s(h, vector<char>(w));
    for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) cin >> s[i][j];
    bool ok = true;
    for(int i = 1; i < h-1; i++) for(int j = 1; j < w-1; j++) {
        if(s[i][j] == '#' && s[i][j] != s[i-1][j] && s[i][j] != s[i][j-1] && s[i][j] != s[i+1][j] && s[i][j] != s[i][j+1]) ok = false;
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}