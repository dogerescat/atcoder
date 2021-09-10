#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> H(n);
    for(int i = 0; i < n; i++) cin >> H[i];
    vector<int> a(n);
    a[0] = 0;
    for(int i = 1; i < n; i++) {
        if(H[i-1] >= H[i]) a[i] = a[i-1] + 1;
        else a[i] = 0;
    }
    int ans = 0;
    for(int i = 0; i < n; i++) ans = max(ans, a[i]);
    cout << ans << endl;
}