#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<vector<int>> honests(n);
    vector<vector<int>> lires(n);
    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        for(int j = 0; j < a; j++) {
            int x, y; cin >> x >> y;
            if(y == 1) honests[i].push_back(x-1);
            else lires[i].push_back(x-1);
        }
    } 
    int ans = 0;
    for(int bit = 0; bit < 1 << n; bit++) {
        int total = 0;
        bool ok = true;
        for(int i = 0; i < n; i++) {
            if(bit & 1 << i) {
                total++;
                for(auto honest : honests[i]) if(!(bit & 1 << honest)) ok = false;
                for(auto lire : lires[i]) if(bit & 1 << lire) ok = false; 
            }
        }
        if(ok) ans = max(ans, total);
    }
    cout << ans << endl;
}