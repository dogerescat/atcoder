#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int main() {
    string s; cin >> s;
    vector<int> a(8);
    map<char, int> m;
    for(int i = s.size() - 1; i >= 0; i--) {
        if(s[i] == 'i') m[s[i]]++;
        else if(s[i] == 'a') {
            if(m.count('i') > 1) m[s[i]] += m.count('i');
            else m[s[i]]++;
        }
        // if(s[i] == 'c') a[0]++;
        // else if(s[i] == 'h') a[1]++;
        // else if(s[i] == 'o') a[2]++;
        // else if(s[i] == 'k') a[3]++;
        // else if(s[i] == 'u') a[4]++;
        // else if(s[i] == 'd') a[5]++;
        // else if(s[i] == 'a') a[6]++;
        // else if(s[i] == 'i') a[7]++;
    }
    int ans = 1;
    for(int i = 0; i < 8; i++) {
        if(!a[i]) {
            cout << 0 << endl;
            return 0;
        }
        ans = (ans * (a[i] % MOD)) % MOD;
    }
    cout << ans % MOD << endl;
}