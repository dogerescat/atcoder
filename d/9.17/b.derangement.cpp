#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> p(n+1);
    for(int i = 0; i < n; i++) cin >> p[i];
    int cnt = 0;
    int ans = 0;
    for(int i = 0; i <= n; i++) {
        if(p[i] == i+1) cnt++;
        else {
            int a = cnt / 2;
            int b = cnt % 2;
            ans += a + b;
            cnt = 0;
        }
    }  
    cout << ans << endl;
}