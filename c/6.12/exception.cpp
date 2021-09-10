#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int, int>> a(n);
    vector<int> ans(n);
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        a[i].first = -x;
        a[i].second = i;
    }
    sort(a.begin(), a.end());
    ans[a[0].second] = -a[1].first;
    for(int i = 0; i < n; i++) {
        if(ans[i]) continue;
        ans[i] = -a[0].first;
    }
    for(int i = 0; i < n; i++) {
        cout << ans[i] << endl;
    }
}