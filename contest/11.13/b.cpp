#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];
    vector<bool> a(n);
    for(int k = 0; k < n; k++) {
        for(int i = 1; i < 1000; i++) {
            for(int j = 1; j < 1000; j++) {
                int x = 4 * i * j + 3 * i + 3 * j;
                if(s[k] == x) {
                    a[k] = true;
                }    
            }
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++) if(!a[i]) ans++;
    cout << ans << endl;
}