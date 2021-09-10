#include <bits/stdc++.h>
using namespace std;

template<class T> void chmax(T &a, T b ) {
    if(a < b) {
        a = b;
    }
}

// int gcd(int x, int y) {
//     return x % y == 0 ? y : gcd(y, x % y);
// }

//割る数が0の可能性がある場合はこっちの方がいい
int gcd(int a, int b) { return a ? gcd(b % a, a) : b; }

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int M = 0;
    vector<int> left(n);
    vector<int> right(n);
    left[0] = a[0];
    right[n-1] = a[n-1];
    for(int i = 1; i < n; i++) {
        left[i] = gcd(left[i-1], a[i]);
    }
    for(int i = n - 2; i >= 0; i--) {
        right[i] = gcd(right[i+1], a[i]);
    }
    for(int i = 0; i < n; i++) {    
        int g = 0;
        if(0 < i) g = gcd(g, left[i - 1]);
        g = gcd(g, right[i + 1]);
        chmax(M, g);
    }
    cout << M << endl;
}