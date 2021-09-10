#include <bits/stdc++.h>
using namespace std;

template<class T> void chmax(T &a, T b) {
    if(a < b) a = b;
}

int gcd(int a, int b) {
    return b ? gcd(b, a%b) : a;
}

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> b(n+1);
    vector<int> c(n+1);
    for(int i = 0; i < n; i++) {
        b[i+1] = gcd(b[i], a[i]);
    }
    for(int i = n-1; i >= 0; i--) {
        c[i] = gcd(c[i+1], a[i]);
    }
    int ans = 0;
    for(int i = 0; i < n; i++) {
        int x = gcd(b[i], c[i+1]);
        chmax(ans, x);
    }
    cout << ans << endl;
}