#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    vector<string> s(3);
    for(int i = 0; i < 3; i++) cin >> s[i];
    map<char, ll> m;
    set<char> heads;
    for(int i = 0; i < 3; i++) {
        reverse(s[i].begin(), s[i].end());
        ll k = 1;
        if(i == 2) k = -1;
        for(auto c : s[i]) {
            m[c] += k;
            k *= 10;
        }
        reverse(s[i].begin(), s[i].end());
        heads.insert(s[i][0]);
    }
    if(m.size() > 10) {
        cout << "UNSOLVABLE" << endl;
        return 0;
    }
    vector<int> p(10);
    iota(p.begin(), p.end(), 0);
    do {
        int i = 0;
        ll total = 0;
        for(auto x : m) {
            char c = x.first;
            ll k = x.second;
            if(p[i] == 0 && heads.count(c)) total = 1e18;
            total += k * p[i];
            i++;
        }
        if(total == 0) {
            i = 0;
            for(auto& x : m) {
                x.second = p[i];
                i++;
            }
            for(int j = 0; j < 3; j++) {
                ll ans = 0;
                for(auto c : s[j]) {
                    ans = ans * 10 + m[c];
                }
                cout << ans << endl;
            }
            return 0;
        }
    } while(next_permutation(p.begin(), p.end()));
    cout << "UNSOLVABLE" << endl;
}