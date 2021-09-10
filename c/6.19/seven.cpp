#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int cnt = 0;
    vector<bool> ans(n, true);
    for(int i = 1; i <= n; i++) {
        int x = i;
        int y = i;
        while(x && y) {
            if(x % 10 == 7) {
                ans[i-1] = false;
                break;
            }
            x /= 10;
            if(y % 8 == 7) {
                ans[i-1] = false;
                break;
            }
            y /= 8;

        }
    }
    for(int i = 0; i < n; i++) if(ans[i]) cnt++;
    cout << cnt << endl;
}