#include <bits/stdc++.h>
using namespace std;

template<class T> void chmax(T &a, T b) {
    if(a < b) a = b;
}

int main() {
    int n; cin >> n;
    vector<vector<int>> f(n, vector<int>(10));
    vector<vector<int>> p(n, vector<int>(11));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 10; j++) cin >> f[i][j];
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 11; j++) cin >> p[i][j];
    }
    int ans = -1001001001;
    for(int bit = 1; bit < 1 << 10; bit++) {
        int total = 0;
        for(int i = 0; i < n; i++) {
            int cnt = 0;
            for(int j = 0; j < 10; j++) {
                if(bit & 1 << j) {
                    if(f[i][j]) cnt++;
                }
            }
            total += p[i][cnt];
        }
        chmax(ans, total);
    }
    cout << ans << endl;
}