#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, n; cin >> k >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int l = a[0];
    
    for(int i = 1; i < n; i++) {
        l = max(l, a[i] - a[i-1]);
    }
    l = max(l, k - a[n-1]+a[0]);
    cout << k - l << endl;
}