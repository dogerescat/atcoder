#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<vector<int>> a(n);
    for(int i = 0; i < n; i++) {
        int l; cin >> l;
        for(int j = 0; j < l; j++) {
            int x; cin >> x;
            a[i].push_back(x);
        }
    }
    map<vector<int>, int> mp;
    for(int i = 0; i < n; i++) {
        if(!mp.count(a[i])) mp[a[i]]++;
    }
    cout << mp.size() << endl;
}