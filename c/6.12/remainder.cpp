#include <bits/stdc++.h>
using namespace std;

const long long inf = 1e9;

template<class T>void chmin(T& a, T b) {
    if(a > b) {
        a = b;
    }
}

int main() {
    int L, R;
    cin >> L >> R;
    long long ans = inf;
    for(int i = L; i < R; i++) {
        for(int j = L+1; j < R+1; j++) {
            chmin(ans, (long long)i*j%2019);
            if(ans == 0) {
                cout << ans << endl;
                return 0;
            }
        }
    }
    cout << ans << endl;
}