#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    vector<int> ans;
    map<int, int> cnt;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) {
        cnt[a[i]]++;
        if(cnt[a[i]] == 2) {
            cnt[a[i]] = 0;
            ans.push_back(a[i]);
        }
    }
    sort(ans.begin(), ans.end(), greater<int>());
    if(ans.size() >= 2) cout << (ll)ans[0] * ans[1] << endl;
    else cout << 0 << endl;
}