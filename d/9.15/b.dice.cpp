#include <bits/stdc++.h>
using namespace std;

template<class T> void chmax(T &a, T b) {
    if(a < b) a = b;
}

int main() {
    int n, k; cin >> n >> k;
    vector<double> p(n);
    for(int i = 0; i < n; i++) cin >> p[i];
    vector<double> E(n);
    for(int i = 0; i< n; i++) {
        E[i] = (double)(p[i] * (p[i]-1) / (2*p[i])) + 1.0;
    }
    double ans = 0;
    double a = 0;
    for(int i = 0; i < k; i++) {
        a += E[i];
    }
    for(int i = 0; i <= n - k; i++) {
        chmax(ans, a);
        a -= E[i];
        a += E[i+k];
    }
    cout << fixed << setprecision(10) << ans << endl;
}