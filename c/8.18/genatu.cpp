#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        a[i].first = x;
        a[i].second = i;
    }
    sort(a.begin(), a.end());
    vector<int> b(n);
    int v = -1;
    int m = -1;
    for(int i = 0; i < n; i++) {
        if(v != a[i].first) ++m;
        b[a[i].second] = m;
        v = a[i].first;
    }
    for(int i = 0; i < n; i++) {
        cout << b[i] << endl;
    }
}