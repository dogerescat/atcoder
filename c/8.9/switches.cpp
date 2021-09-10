#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> s(m, vector<int>(n+1));
    vector<int> p(m);
    for(int i = 0; i < m; i++) {
        cin >> s[i][0];
        for(int j = 1; j <= s[i][0]; j++){
            cin >> s[i][j];
            s[i][j]--;
        } 
    }
    for(int i = 0; i < m; i++) cin >> p[i];
    int ans = 0;
    for(int bit = 0; bit < 1 << n; bit++) {
        int on = 0;
        for(int i = 0; i < m; i++) {
            int cnt = 0;
            for(int j = 1; j <= s[i][0]; j++) {
                if(bit & (1 << s[i][j])) cnt++;
            }
            if(cnt % 2 == p[i]) on++;
        }
        if(on == m) ans++;
    }
    cout << ans << endl;
}