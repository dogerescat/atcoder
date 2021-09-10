#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> &A,vector<int> &a, vector<int> &b, vector<int> &c, vector<int> &d, int &n, int &m, int q, int &ans, int cu=0, int lst=1) {
    if(cu == n) {
        int total = 0;
        for(int i = 0; i < q; i++) {
            if(A[b[i]-1] - A[a[i]-1] == c[i]) total += d[i];
        }
        ans = max(ans, total);
        return;
    }
    for(int i = lst; i <= m; i++) {
        A[cu] = i;
        dfs(A, a, b, c, d, n, m, q ,ans ,cu+1, i);
    }
}

int main() {
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> A(n);
    vector<int> a(q);
    vector<int> b(q);
    vector<int> c(q);
    vector<int> d(q);
    for(int i = 0; i < q; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];
    int ans = 0;
    dfs(A, a, b, c, d, n, m, q, ans);
    cout << ans << endl;
}