#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, n; cin >> x >> n;
    set<int> a;
    for(int i = 0; i < n; i++) {
        int b; cin >> b;
        a.insert(b);
    }
    int ans = 10000; int diff = 10000;
    for(int i = 0; i <= 101; i++) {
        if(!a.count(i)) {
            int d = abs(i - x);
            if(diff > d) {
                ans = i;
                diff = d;
            }
        }
    }
    cout << ans << endl;
}