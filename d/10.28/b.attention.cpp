#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; string s; cin >> n >> s;
    vector<int> l(n);
    vector<int> r(n);
    for(int i = 1; i < n; i++) {
        if(s[i-1] == 'W') l[i] = l[i-1] + 1;
        else l[i] = l[i-1]; 
    }
    for(int i = n-2; i >= 0; i--) {
        if(s[i+1] == 'E') r[i] = r[i+1] + 1;
        else r[i] = r[i+1];
    }
    int ans = 1001001001;
    for(int i = 0; i < n; i++) {
        ans = min(ans, l[i]+r[i]);
    }
    cout << ans << endl;
}