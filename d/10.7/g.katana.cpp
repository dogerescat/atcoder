#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, h; cin >> n >> h;
    vector<int> a(n);
    vector<int> b(n);
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];
    sort(a.begin(), a.end(), greater<int>());
    sort(b.begin(), b.end(), greater<int>());
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(a[0] < b[i]) {
            ans++;
            h -= b[i];
        } else break;
        if(h <= 0) {
            cout << ans << endl;
            return 0;
        }
    }

    ans += (h + a[0]-1) / a[0];
    cout << ans << endl;
}