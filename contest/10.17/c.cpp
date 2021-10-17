#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<double> a(n);
    vector<double> b(n);
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];
    double t = 0.0;
    for(int i = 0; i < n; i++) {
        t += a[i]/b[i];
    }
    t /= 2.0;
    double ans = 0.0;
    for(int i = 0; ; i++) {
        if((a[i]/b[i]) < t) {
            ans += a[i];
            t -= (a[i]/b[i]);
        } else {
            ans += (t * b[i]);
            cout << fixed << setprecision(10) << ans << endl;
            return 0;
        }
    }
}