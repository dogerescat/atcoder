#include <bits/stdc++.h>
using namespace std;

int func(vector<int> &memo, int n, int a, int b, int c, int cnt = 0) {
    if(cnt == 100) return memo[n] = 0;
    if(memo[n] != -1) return memo[n];
    if(n == a || n == b || n == c) return memo[n] = 0;
    if(n == 1 || n == 2 || n == 3) return memo[n] = 1;
    if(func(memo, n-1, a, b, c, cnt+1) || func(memo, n-2, a, b, c, cnt+1) || func(memo, n-3, a, b, c, cnt+1)) return memo[n] = 1;
    return memo[n] = 0;
}

int main() {
    int n; cin >> n;
    int a, b, c; cin >> a >> b >> c;
    vector<int> memo(n+1, -1);
    if(func(memo, n, a, b, c)) cout << "YES" << endl;
    else cout << "NO" << endl;
}