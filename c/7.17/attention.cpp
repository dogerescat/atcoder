#include <bits/stdc++.h>
using namespace std;

template<class T> void chmin(T& a, T b) {
    if(a > b) a = b;
}

int main() {
    int n; 
    string s;
    cin >> n >> s;
    vector<int> a(n);
    vector<int> b(n);
    a[0] = 0;
    for(int i = 1; i < n; i++) {
        if(s[i-1] == 'W') a[i] = a[i-1] + 1;
        else a[i] = a[i-1];
    }
    b[n-1] = 0;
    for(int i = n-2; i >= 0; i--) {
        if(s[i+1] == 'E') b[i] = b[i+1] + 1;
        else b[i] = b[i+1];
    }
    int ans = 1e9;
    for(int i = 0; i < n; i++) {
        chmin(ans, a[i]+b[i]);
    }
    cout << ans << endl;
}