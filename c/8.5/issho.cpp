#include <bits/stdc++.h>
using namespace std;

template<class T> void chmin(T& a, T b) {
    if(a > b) a = b;
}

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int ans = 1000000000;
    sort(a.begin(), a.end());
    for(int i = a[0]; i <= a[n-1]; i++) {
        int total = 0;
        for(int j = 0; j < n; j++) {
            total += (a[j] - i) * (a[j] - i);
        }
        chmin(ans, total);
    }
    cout << ans << endl;
}