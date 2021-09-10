#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y) {
    return x % y == 0 ? y : gcd(y, x % y);
}

int main() {
    int n; cin >> n;
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            int m = gcd(i, j);
            for(int k = 1; k <= n; k++) {
                ans += gcd(m, k);
            }
        }
    }
    cout << ans << endl;
}