#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;
    vector<bool> a(100, false);
    for(int i = 0; i < n; i++) {
        int num; cin >> num;
        a[num-1] = true;
    }
    int ans;
    int M = 10000;
    for(int i = x - 1; i >= 0; i--) {
        if(!a[i] && M >= abs(x - 1 - i)) {
            M = abs(x - i - 1);
            ans = i + 1;
        }
    }
    for(int i = x - 1; i < n; i++) {
        if(!a[i] && M > abs(i - x - 1)) {
            M = abs(i - x - 1);
            ans = i + 1;
        }
    }
    cout << ans << endl;
}