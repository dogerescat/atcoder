#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<char> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];
    int a = 0, b = 0; 
    for(int i = 0; i < n; i++) {
        if(s[i] == 'R') a++;
    }
    int ans = max(a, b);
    for(int i = 0; i < n; i++) {
        if(s[i] == 'R') a--;
        else b++;
        int now = max(a, b);
        ans = min(ans, now);
    }
    cout << ans << endl;
}