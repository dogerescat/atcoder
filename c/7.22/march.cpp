#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const string MARCH = "MARCH";

int main() {
    int n; cin >> n;
    vector<string> s(n);
    map<char, ll> m;
    for(int i = 0; i < n; i++) cin >> s[i];
    for(int i = 0; i < n; i++) {
        m[s[i][0]]++;
    }
    ll ans = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = i + 1; j < 5; j++) {
            for(int k = j + 1; k < 5; k++) {
                ans += m[MARCH[i]] * m[MARCH[j]] * m[MARCH[k]];
            }
        }
    }
    cout << ans << endl;
}