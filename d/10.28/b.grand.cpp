#include <bits/stdc++.h>
using namespace std;
const int INF = 1001001001;
void func(vector<int> &h,int l, int r, int &ans) {
    if(l >= r) return;
    int mi = INF;
    for(int i = l; i < r; i++) mi = min(mi, h[i]);
    ans += mi;
    for(int i = l; i < r; i++) h[i] -= mi;
    vector<int> zero;
    zero.push_back(-1);
    for(int i = l; i < r; i++) if(h[i] == 0) zero.push_back(i); 
    zero.push_back(r);
    int n = zero.size();
    for(int i = 0; i < n-1; i++) func(h, zero[i]+1, zero[i+1], ans); 
}
int main() {
    int n; cin >> n;
    vector<int> h(n);
    for(int i = 0; i < n; i++) cin >> h[i];
    int ans = 0;
    func(h, 0, n, ans);
    cout << ans << endl; 
}