#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c, k; cin >> r >> c >> k;
    vector<string> s(r);
    int ans = 0;
    for(int i = 0; i < r; i++) cin >> s[i];
    vector<vector<pair<int, int>>> a;

    for(int x = k; x <= r - k + 1; x++) {
        for(int y = k; y <= c - k + 1; y++) {
            vector<pair<int, int>> b;
            
            for(int i = 1; i <= r; i++) {
                for(int j = 1; j <= c; j++) {
                    if((abs(i-x) + abs(j-y)) <= k-1 && s[i-1][j-1] == 'o') {
                        b.push_back(make_pair(i, j));
                    }
                }
            }
            if(b.size()) a.push_back(b);
        }
    }
    for(int i = 0; i < a.size(); i++) {
        int n = a[i].size();
        
    }
    cout << ans << endl;
}