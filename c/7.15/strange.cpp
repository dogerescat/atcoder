#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

template<class T> void chmin(T& a, T b) {
    if(a > b) a = b;
}

int func(int cur, vector<int> &a) {
    if(cur == 0) return 0;
    if(a[cur]) return a[cur];
    int res = INF;
    chmin(res, func(cur-1, a)+1);
    int x = 6;
    while(x <= cur) {
        chmin(res, func(cur-x, a)+1);
        x *= 6;
    }

    x = 9;
    while(x <= cur) {
        chmin(res, func(cur-x, a)+1);
        x *= 9;
    }
    return a[cur] = res;
}

int main() {
    int n; cin >> n;
    vector<int> a(n+1);
    cout << func(n, a) << endl; 
}