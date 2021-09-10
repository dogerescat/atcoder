#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, q;  cin >> n >> k  >> q;
    vector<int> a(n, 0);
    for(int i = 0; i < q; i++) {
        int x; cin >> x;
        a[x-1]++;
    }
    for(int i = 0; i < n; i++) {
        a[i] += k - q;
    }
    for(int i = 0; i < n; i++) {
        if(a[i] > 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}