#include <bits/stdc++.h>
using namespace std;

template<class T> void chmin(T& a, T b) {
    if(a > b) a = b;
}

void func(int l, int r, vector<int> &h, int &ans) {
    if(l >= r) return;
    int mi = 1e9;
    for(int i = l; i < r; i++) chmin(mi, h[i]);
    ans += mi;
    for(int i = l; i < r; i++) h[i] -= mi;
    vector<int> zero;
    zero.push_back(-1);
    for(int i = l; i < r; i++) if(h[i] == 0) zero.push_back(i);
    zero.push_back(r);
    for(int i = 0; i < zero.size(); i++) func(zero[i]+1, zero[i+1], h, ans);
}

int main() {
    int n; cin >> n;
    vector<int> h(n);
    for(int i = 0; i < n; i++) cin >> h[i];
    int ans = 0;
    func(0, n, h, ans);
    cout << ans << endl;
}