#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int INF = 1001001001;

template<class T> void chmin(T &a, T b) {
    if(a > b) a = b;
}

int main() {
    int n, x, y; cin >> n >> x >> y;
    x--; y--;
    vector<int> ans(n+1);
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int k = INF;
            chmin(k, j - i);
            chmin(k, abs(x - i) + abs(y - j) + 1);
            ans[k]++;
        }
    }
    for(int k = 1; k < n; k++) cout << ans[k] << endl;
}