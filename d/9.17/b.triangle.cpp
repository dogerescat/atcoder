#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> L(n);
    for(int i = 0; i < n; i++) cin >> L[i];
    sort(L.begin(), L.end());
    int ans = 0;
    for(int b = 0; b < n; b++) for(int a = 0; a < b; a++) {
        int ab = L[a] + L[b];
        int r = lower_bound(L.begin(), L.end(), ab) - L.begin();
        int l = b + 1;
        ans += r - l;
    }
    cout << ans << endl;
}