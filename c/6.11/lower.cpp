#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    for(int i = 0; i < n; i++) cin >> h[i];
    vector<bool> a(n-1, false);
    for(int i = 0; i < n-1; i++) {
        if(h[i] >= h[i+1]) a[i] = true;
    }
    int ans = 0;
    int total = 0;
    for(int i = 0; i < n-1; i++) {
        if(!a[i]) total = 0;
        else total++;
        ans = max(ans, total);
    }
    cout << ans << endl;
}