#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int x = a[n-1];
    a.pop_back();
    int y = 0;
    int m = 1001001001;
    for(int i = 0; i < n-1; i++) {
        if(m >= abs((x / 2) - a[i])) {
            m = abs((x / 2) - a[i]);
            y = a[i];
        }
    }
    cout << x << " " << y << endl;
}