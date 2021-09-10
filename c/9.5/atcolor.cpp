#include <bits/stdc++.h>
using namespace std;

template<class T> void chmax(T &a, T b) {
    if(a < b) {
        a = b;
    }
}

int main() {
    int n; cin >> n;
    vector<int> x(1000001);
    for(int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        x[a]++;
        x[b+1]--;
    }
    int ans = 0;
    vector<int> y(1000001);
    if(x[0]) y[0] = x[0];
    for(int i = 1; i <= 1000000; i++) {
        y[i] = y[i-1] + x[i];
    }
    for(int i = 0; i <= 1000000; i++) {
        chmax(ans, y[i]);
    }
    cout << ans << endl;
}