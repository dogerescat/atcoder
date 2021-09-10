#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int ans = -1001001001;
    for(int i = 0; i < n; i++) {
        int aoki_pre = -1001001001, takahashi_pre = -1001001001;
        for(int j = 0; j < n; j++) {
            if(i == j) continue;
            int x = min(i, j);
            int y = max(i, j);
            int cnt = 1;
            int aoki = 0;
            int takahashi = 0;
            for(int k = x; k <= y; k++) {
                if(cnt % 2 == 0) aoki += a[k];
                else takahashi += a[k];
                cnt++;
            }
            if(aoki > aoki_pre) {
                aoki_pre = aoki;
                takahashi_pre = takahashi;
            }
        }
        ans = max(ans, takahashi_pre);
    }
    cout << ans << endl;
}