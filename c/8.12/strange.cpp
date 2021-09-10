#include <bits/stdc++.h>
using namespace std;

template<class T> void chmin(T &a, T b) {
    if(a > b) a = b;
}

const int INF = 1001001001;

int func(vector<int> &memo, int cur) {
    if(cur == 0) return 0;
    if(memo[cur]) return memo[cur];
    int res = INF;
    chmin(res, func(memo, cur-1) + 1);
    int x; 
    x = 6;
    while(cur >= x) {
        chmin(res, func(memo, cur - x) + 1);
        x *= 6;
    }
    x = 9;
    while(cur >= x) {
        chmin(res, func(memo, cur - x) + 1);
        x *= 9;
    }
    return memo[cur] = res;
}

int main() {
    int n; cin >> n;
    vector<int> memo(n+1);
    cout << func(memo, n) << endl;
}