#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        a[i].first = x;
        a[i].second = i+1;
    }
    sort(a.begin(), a.end(), greater<pair<int,int>>());
    for(auto i : a) {
        cout << i.second << endl;
    }
}