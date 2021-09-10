#include <bits/stdc++.h>
using namespace std;

template<class T> void chmax(T& a, T b) {
    if(a < b) {
        a = b;
    }
}

int ans = 0;

void dfs(vector<vector<int>>& Q ,vector<int>& a, int n, int m, int cur = 0, int lst = 1) {
    if(cur == n) {
        int cnt = 0;
        for(auto q : Q) {
            if(a[q[1]] - a[q[0]] == q[2]+1) cnt += q[3]+1;
        }
        chmax(ans, cnt);
        return;
    }
    for(int i = lst; i <= m; i++) {
        a[cur] = i;
        dfs(Q, a, n, m, cur+1, i);
    }
}

int main() {
    int n, m, q;
    cin >> n >> m >> q;
    vector<vector<int>> Q(q, vector<int>(4));
    for(int i = 0; i < q; i++) {
        for(int j = 0; j < 4; j++) {
          cin >> Q[i][j];
          Q[i][j]--;
        }
    }
    vector<int> a(10);
    dfs(Q, a, n, m);
    cout << ans  << endl;
}