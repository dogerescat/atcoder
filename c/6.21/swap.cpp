#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    map<int, int> m;
    long long ans = 0;
    for(int j = 0; j < n; j++) {
        ans += j - m[a[j]];
        m[a[j]]++;
    }
    cout << ans << endl;
}