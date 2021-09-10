#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<vector<int>> honests(n);
    vector<vector<int>> lirars(n);
    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        for(int j = 0; j < a; j++) {
            int x, y; cin >> x >> y;
            if(y) honests[i].push_back(x-1);
            else lirars[i].push_back(x-1);
        }
    }
    int ans = 0;
    for(int bit = 0; bit < 1 << n; bit++) {
        bool ok = true;
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(bit & 1 << i) {
                cnt++;
                for(auto honest : honests[i]) {
                    if(!(bit & (1 << honest))) ok = false;
                }
                for(auto lirar : lirars[i]) {
                    if(bit & 1 << lirar) ok = false;
                }
            }
        }

       if(ok) ans = max(ans, cnt);
    }
    cout << ans << endl;
}