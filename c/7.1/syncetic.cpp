#include <bits/stdc++.h>
using namespace std;

template<class T> void chmin(T& a, T b) {
    if(a > b) a = b;
}

int n, A, B, C;
int ans = 1e9;

void dfs(vector<int> &l, vector<int> &flag, int cu) {
    if(cu == n) {
        int a = 0, b = 0, c = 0;
        int ca = 0, cb = 0, cc = 0;
        for(int i = 0; i < n; i++) {
            if(flag[i] == 0) a += l[i], ca++;
            else if(flag[i] == 1) b += l[i], cb++;
            else if(flag[i] == 2) c += l[i], cc++;
        }
        if(ca == 0 || cb == 0 || cc == 0) return;
        int mp = (ca-1) * 10 + (cb-1) * 10 + (cc-1) * 10 + abs(A - a) + abs(B - b) + abs(C - c);
        chmin(ans, mp);
        return;
    }
    for(int i = 0; i < 4; i++) {
        flag[cu] = i;
        dfs(l, flag, cu + 1);
    }
}

int main() {
    cin >> n >> A >> B >> C;
    vector<int> l(n);
    vector<int> flag(n);
    for(int i = 0; i < n; i++) cin >> l[i];
    dfs(l, flag, 0);
    cout << ans << endl;
}