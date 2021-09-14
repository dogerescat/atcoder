#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// k = 10^18 だから　2^60あれば足りる
const int D = 60;
const int MAX_N = 200005;

//dp[i][j] := 頂点jから2^i回移動した先の頂点
int dp[D][MAX_N];
int main() {
    int n; ll k; 
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> dp[0][i];
        dp[0][i]--;
    }
    //tableを作る.遷移は 2^i <- 2^(i-1)
    for(int i = 0; i < D; i++) for(int j = 0; j < n; j++) {
        dp[i+1][j] = dp[i][dp[i][j]];
    }
    
    //最初の頂点
    int v = 0;
    for(int i = D-1; i >= 0; i--) {
        //オーバーフローしないように 1llにする
        ll l = 1ll << i;
        //l個先をたどる
        //l = 2^i
        if(l <= k) {
            v = dp[i][v];
            k -= l;
        }
    }
    //デクリメントしてた分を足す
    cout << v + 1 << endl;
}