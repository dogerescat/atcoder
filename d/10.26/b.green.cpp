#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int n; cin >> n;
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];
    vector<string> x(n);
    for(int i = 0; i < n; i++) {
        vector<int> a(26);
        for(int j = 0; j < 10; j++) {
            a[s[i][j]-'a']++;
        }
        string t = "";
        for(int j = 0; j < 26; j++) {
            t = t + to_string(a[j]);
        }
        x[i] = t;
    } 
    sort(x.begin(), x.end()); 
    ll cnt = 1;
    ll ans = 0;
    for(int i = 1; i < n; i++) {
       if(x[i] == x[i-1]) cnt++;
       else {
           ans += cnt * (cnt-1) / 2;
           cnt = 1;
       } 
    } 
    if(cnt != 1) ans += cnt * (cnt-1) / 2;
    cout << ans << endl;
}