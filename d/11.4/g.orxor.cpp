#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int ans = 2000000000;
    for(int bit = 0; bit < 1 << (n-1); bit++) {
        int total = 0;
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            cnt |= a[i];
            if(bit & (1 << i)) {
                total ^= cnt;
                cnt = 0;
            }
        }
        total ^= cnt;
        ans = min(ans, total);
    }
    cout << ans << endl;
}