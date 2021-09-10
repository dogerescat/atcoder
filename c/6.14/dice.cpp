#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, k; cin >> n >> k;
    double ans = 0;
    for(int i = 1; i <= n; i++) {
        int j = i;
        double d = 1.0 / n;
        while (j < k) {
            j *= 2;
            d /= 2;
        }
        ans += d;
    }
    cout << fixed << setprecision(10) << ans << endl;
}