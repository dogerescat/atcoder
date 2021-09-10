#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n; 
    vector<double> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    double ans = (v[0] + v[1]) / 2;
    for(int i = 2; i < n; i++) {
        ans = (ans + v[i]) / 2;
    }
    cout << fixed << setprecision(5) << ans << endl;
}