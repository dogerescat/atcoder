#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int cnt = 0;
    vector<int> b;
    for(int i = 0; i < n; i++) {
        if(a[i] % 4 == 0) cnt++;
        else b.push_back(a[i]);
    }
    int cnt2 = 0;
    for(auto i : b) {
        if(i % 2 == 0) cnt2++;
    }
    if(cnt >= n / 2 || cnt2 >= n - cnt * 2) cout << "Yes" << endl;
    else cout << "No" << endl;
}