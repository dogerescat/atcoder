#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; string s;
    cin >> n >> s;
    vector<int> cnt(3);
    for(auto c : s) {
        if(c == 'R') cnt[0]++;
        if(c == 'G') cnt[1]++;
        if(c == 'B') cnt[2]++;
    }
    ll ans = 1;
    for(int i = 0; i < 3; i++) ans *= cnt[i];
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            int k = j + (j - i);
            if(k < n) {
                if(s[i] == s[j]) continue;
                if(s[i] == s[k]) continue;
                if(s[k] == s[j]) continue;
                ans--;
            }
        }
    }
    cout << ans << endl;
}