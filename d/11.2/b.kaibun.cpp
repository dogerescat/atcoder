#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];
    vector<int> a(26, 1001001001);
    for(int i = 0; i < n; i++) {
        vector<int> b(26);
        for(int j = 0; j < s[i].size(); j++) {
            b[s[i][j] - 'a']++;
        }
        for(int j = 0; j < 26; j++) {
            a[j] = min(a[j], b[j]);
        }
    }
    string ans = "";
    for(int i = 0; i < 26; i++) {
        for(int j = 0; j < a[i]; j++) {
            ans += 'a' + i;
        }
    }
    cout << ans << endl;
}