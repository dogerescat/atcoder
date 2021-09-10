#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    vector<int> a(200000);
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        a[x-1]++;
    }
    sort(a.begin(), a.end(), greater<int>());
    int ans = 0;
    for(int i = k; i < 200000; i++) {
        ans += a[i];
    }
    cout << ans << endl;
}