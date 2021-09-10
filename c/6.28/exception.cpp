#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        a[i].first = -x;
        a[i].second = i;
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++) {
        if(a[0].second == i) cout << -a[1].first << endl;
        else cout << -a[0].first << endl;
    }
}