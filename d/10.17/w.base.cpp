#include <bits/stdc++.h>
using namespace std;
using ll = long long;

template<class T> void chmax(T &a, T b) {
    if(a < b) a = b;
}
int main() {
    string s;
    ll m;
    cin >> s >> m;
    if(s.size() == 1) {
        if(stoi(s) <= m) cout << 1 << endl;
        else cout << 0 << endl;
        return 0;
    }
    ll n = 0;
    for(int i = 0; i < s.size(); i++) {
        chmax(n, (ll)s[i] - '0');
    }
    // reverse(s.begin(), s.end());
    ll left = n, right = m+1;
    while(right - left > 1) {
        ll mid = (left + right) / 2;
        ll total = 0;
        for(int i = 0; i < s.size(); i++) {
            if(total > m / mid) total = m + 1;
            else total = total * mid + (s[i] - '0');
        }
        if(total <= m) {
            left = mid;
        } else {
            right = mid;
        }
    }
    cout << left - n << endl;
}