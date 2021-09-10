#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<string> s(n);
    map<string, long long> a;
    
    for(int i = 0; i < n; i++) cin >> s[i];
    for(int i = 0; i < n; i++) {
        sort(s[i].begin(), s[i].end());
        a[s[i]]++;
    }
    long long ans = 0;
    for(auto &i : a) {
        ans += i.second * (i.second - 1) / 2;
    }
    cout << ans << endl;
}