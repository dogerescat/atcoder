#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(200, 0);
    for(int i = 0; i < n; i++) {
        int A; cin >> A;
        a[A%200]++;
    }
    int ans = 0;
    for(int i = 0; i < 200; i++) {
        int t = a[i] * (a[i] - 1) / 2;
        ans += t;
    }
    cout << ans << endl;
}