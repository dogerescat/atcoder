#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    double ans = 0.0;
    for(int i = n-1; i > 0; i--) {
        ans += 1.0 * n / (i);
    }
    cout << fixed << setprecision(10) << ans << endl;
}