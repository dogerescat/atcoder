#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        a[i].first = x;
        a[i].second = i;
    }
    sort(a.begin(), a.end());
    vector<int> ans(n);
    for(int i = 0; i < n; i++) {
        if(i < n / 2) {
            ans[a[i].second] = a[n/2].first; 
        } else {
            ans[a[i].second] = a[(n-1)/2].first;
        }
    }
    for(int i = 0; i < n; i++) {
        cout << ans[i] << endl;
    }
}