#include <bits/stdc++.h>
using namespace std;

template<class T> void chmax(T &a, T b) {
    if(a < b) a = b;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> honests(n, vector<int>());
    vector<vector<int>> lairs(n, vector<int>());
    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        for(int j = 0; j < a; j++) {
            int x, y; cin >> x >> y;
            if(y) honests[i].push_back(x-1);
            else lairs[i].push_back(x-1);
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
                for(auto lair : lairs[i]) {
                    if(bit & (1 << lair)) ok = false;
                }
            }
        }
        if(ok) chmax(ans, cnt);
    }
    cout << ans << endl;
}