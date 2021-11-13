#include <bits/stdc++.h>
using namespace std;

void dfs(int n, int A, int B, int C, vector<int> v, vector<int> l, int &ans, int deep = 0) {
    if(deep == n) {
        int a = 0, b = 0, c = 0;
        int total = 0;
        int cnta = -1;
        int cntb = -1;
        int cntc = -1;
        for(int i = 0; i < n; i++) {
           if(v[i] == 0) a += l[i], cnta++;
           else if(v[i] == 1) b += l[i], cntb++;
           else if(v[i] == 2) c += l[i], cntc++;
        }
        if(cnta == -1 || cntb == -1 || cntc == -1) return;
        total += (cnta + cntb + cntc) * 10;
        total += abs(A - a);
        total += abs(B - b);
        total += abs(C - c);
        ans = min(ans, total);
        return; 
    }
    for(int i = 0; i < 4; i++) {
        v[deep] = i;
        dfs(n, A, B, C, v, l, ans, deep+1);
    }
}
int main() {
    int n, a, b, c; cin >> n >> a >> b >> c;
    vector<int> l(n);
    for(int i = 0; i < n; i++) cin >> l[i];
    vector<int> v(n, -1);
    int ans = 1001001001;
    dfs(n, a, b, c, v, l, ans);
    cout << ans << endl;
}