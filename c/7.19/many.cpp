#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int, int>> x(n, pair<int, int>());
    vector<int> ans(n);
    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        x[i].first = a;
        x[i].second = i; 
    }
    sort(x.begin(), x.end());
    for(int i = 0; i < n; i++) {
        if(i+1 <= n/2) ans[x[i].second] = x[n/2].first;
        else ans[x[i].second] = x[(n-1)/2].first;
    }
    for(int i = 0; i < n; i++) {
        cout << ans[i] << endl;
    }
}