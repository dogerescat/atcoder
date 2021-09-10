#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    double ans = 0;
    for(int i = 1; i <= n; i++) {
        double x = 1.0 / n;
        int y = i;
        while(y < k) {
            x /= 2;
            y *= 2;
        }
        ans += x;
    }
    cout << fixed << setprecision(10) << ans << endl;
}