#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] % 4 == 0) cnt1++;
        else if(a[i] % 2 == 0) cnt2++;
    }
    if(cnt1 >= n / 2 || n - 2 * cnt1 <= cnt2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}