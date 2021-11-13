#include <bits/stdc++.h>
using namespace std;

int main() {
    int d, g; cin >> d >> g;
    g /= 100;
    vector<int> p(d);
    vector<int> c(d);
    for(int i = 0; i < d; i++) {
        cin >> p[i] >> c[i];
        c[i] /= 100;
    }
    int ans = 1001001001;
    for(int bit = 0; bit <= 1 << d; bit++) {
        int total = 0;
        int cnt = 0;
        for(int i = 0; i < d; i++) {
            if(bit & 1 << i) {
                total += (i+1) * p[i] + c[i];
                cnt += p[i];
            }
        }
        if(total < g) {
            for(int i = d-1; i >= 0; i--) {
                if(!(bit & 1 << i)) {
                    for(int j = 1; j < p[i]; j++) {
                        total += (i+1);
                        cnt++;
                        if(total >= g) break;
                    }
                    break;
                }
            }
        }
        if(total >= g) ans = min(ans, cnt);
    }
    cout << ans << endl;
}