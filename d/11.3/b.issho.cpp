#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int ans = 1001001001;
    for(int i = a[0]; i <= a[n-1]; i++) {
        int total = 0;
        for(int j = 0; j < n; j++) {
            total += (i - a[j]) * (i - a[j]);
        }
        ans = min(ans, total);
    }
    cout << ans << endl;
}