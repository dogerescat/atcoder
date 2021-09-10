#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> b;
    int ans = 0;
    int total = 0;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        if(x % 10 == 0) ans += x;
        else b.push_back(x), total += x;
    }
    sort(b.begin(), b.end());
    for(int i = 0; i < b.size(); i++) {
        if(total % 10 != 0) break;
        total -= b[i];
    }
    cout << ((ans + total) % 10 ? ans + total : 0)  << endl;
}