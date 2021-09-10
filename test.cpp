#include <bits/stdc++.h>
using namespace std;

template<class T> void chmax(T& a, T b) {
    if(a < b) {
        a = b; 
    }
}
int ans = 0;
int A[10];
int N, M, Q, a[50], b[50], c[50], d[50];
void dfs(int cu = 0, int lst = 1) {
    if (cu == N) {
        int tot = 0;
        for(int i = 0; i < Q; i++) if (A[b[i]] - A[a[i]] == c[i]) tot += d[i];
        chmax(ans, tot);
        return;
    }

    for(int i = 0; i < N; i++) {
        cout << a[i] << ' ';
    }
    cout << endl;
    for(int nxt = lst; nxt < M + 1; nxt++) {
        A[cu] = nxt;
        dfs(cu + 1, nxt);
    }
}

int main() {
    cin >> N >> M >> Q;
    for(int i = 0; i < Q; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
        a[i]--; b[i]--;
    }

    dfs();
    // cout << ans << endl;

}