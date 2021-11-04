#include <bits/stdc++.h>
using namespace std;


void dfs(vector<int> &a, vector<int> &b, vector<int> &c, vector<int> &d, vector<int> A,int &ans, int n, int m, int q, int cu = 0, int lst = 1) {
    if(cu == n) {
        int cnt = 0;
        for(int i = 0; i < q; i++) {
            if(A[b[i]-1] - A[a[i]-1] == c[i]) cnt += d[i];
        }
        ans = max(ans, cnt);
        return;
    } 
    for(int i = lst; i <= m; i++) {
        A[cu] = i;
        dfs(a, b, c, d, A, ans, n, m, q, cu+1, i);
    }
}
int main() {
    int n, m, q; cin >> n >> m >> q;
    vector<int> a(q);
    vector<int> b(q);
    vector<int> c(q);
    vector<int> d(q);
    for(int i = 0; i < q; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];
    int ans = 0;
    vector<int> A(n);
    dfs(a, b, c, d, A, ans, n, m, q);
    cout << ans << endl;
}