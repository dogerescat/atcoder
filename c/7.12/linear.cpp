#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] -= (i+1);
    }
    sort(a.begin(), a.end());
    int b;
    if(n % 2 == 1) b = a[n/2];
    else b = (a[n/2-1] + a[n/2])/2;
    long long ans = 0;
    for(int i = 0; i < n; i++) ans += abs(a[i] - b);
    cout << ans << endl;
}