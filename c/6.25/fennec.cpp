#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    for(int i = 0; i < k; i++) {
        if(!a.size()) {
            cout << 0 << endl;
            return 0;
        }
        a.pop_back();
    }
    long long ans = 0;
    for(auto i : a) {
        ans += i;
    }
    cout << ans << endl;
}