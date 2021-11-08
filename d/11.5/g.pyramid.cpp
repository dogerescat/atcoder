#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int n; cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    vector<int> h(n);
    for(int i = 0; i < n; i++) cin >> x[i] >> y[i] >> h[i];
    int index = 0;
    for(int i = 0; i < n; i++) if(h[i] > 0) index = i;
    for(int cx = 0; cx <= 100; cx++) {
        for(int cy = 0; cy <= 100; cy++) {
            ll H = h[index] + abs(x[index] - cx) + abs(y[index] - cy);
            bool ok = true;
            for(int i = 0; i < n; i++) {
                if(h[i] != max(H - abs(x[i] - cx) - abs(y[i] - cy), 0LL)) ok = false;
            }
            if(ok) {
                cout << cx << ' ' << cy << ' ' << H << endl;
                return 0;
            }
        }
    }
}