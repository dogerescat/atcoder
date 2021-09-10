#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(1000000001, 0);
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        a[x-1]++;
    }
    int ans = 0;
    for(auto i : a) {
        if(!i) continue;
        int x = n;
        ans += i * (x - i);
    }
    cout << ans / 2 << endl;
}