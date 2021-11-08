#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    map<int, int> ma;
    map<int, int> mb;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) ma[a[i]]++;
        else mb[a[i]]++;
    }
    vector<pair<int, int>> ap;
    vector<pair<int, int>> bp;
    for(auto i : ma) {
        ap.push_back(make_pair(i.second, i.first));
    }
    for(auto i : mb) {
        bp.push_back(make_pair(i.second, i.first));
    }
    sort(ap.begin(), ap.end(), greater<pair<int, int>>());
    sort(bp.begin(), bp.end(), greater<pair<int, int>>());
    int ans = 0;
    n /= 2;
    if(ap[0].second != bp[0].second) {
        ans += n - ap[0].first;
        ans += n - bp[0].first;
        cout << ans << endl;
        return 0;
    }
    ans = 1001001001;
    ans = min(ans, n - ap[0].first + n - bp[1].first);
    ans = min(ans, n - ap[1].first + n - bp[0].first);
    cout << ans << endl;
}