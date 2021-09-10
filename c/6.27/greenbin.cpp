#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, long long> m;
    for (int i = 0; i < n; i++) {
        string a;
        cin >> a;
        sort(a.begin(), a.end());
        if (m.count(a) > 0) {
            m[a]++;
        } else {
            m.insert(make_pair(a, 1));
        }
    }
    long long ans = 0;
    for (auto i : m) {
        if (i.second == 1) continue;
        ans += i.second * (i.second - 1) / 2;
    }
    cout << ans << endl;
}