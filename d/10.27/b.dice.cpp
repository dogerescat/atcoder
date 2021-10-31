#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    double ans = 0;
    for(int i = 1; i <= n; i++) {
        double p = 1;
        int x = i;
        while(k > x) {
            p *= 0.5;
            x *= 2;
        }
        ans += p/n;
    }
    printf("%.10f\n", ans);
}