#include <bits/stdc++.h>
using namespace std;

template<class T> void chmin(T& a, T b) {
    if(a > b) {
        a = b;
    }
}

int main() {
    int l, r; cin >> l >> r;
    long long ans = 2019;
    for(long long i = l; i < r; i++) {
        for(long long j = l+1; j <= r; j++) { 
            chmin(ans, i * j % 2019);
            if(ans == 0) {
                cout << ans << endl;
                return 0;
            }
        }
    }
    cout << ans << endl;
}