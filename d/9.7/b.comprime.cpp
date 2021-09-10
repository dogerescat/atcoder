#include <bits/stdc++.h>
using namespace std;

vector<int> func(int x) {
    vector<int> res;
    for(int i = 2; i * i <= x; i++) {
        while(x % i == 0) {
            x /= i;
            res.push_back(i);
        }
    }
    if(x != 1) res.push_back(x);
    return res;
}

int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n);
    vector<bool> b(m, true);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) {
        vector<int> res = func(a[i]);
        for(auto &j : res) {
            if(b[j-1]) {
                for(int k = j; k <= m; k += j) {
                    b[k-1] = false;
                }
            }
        }
    }
    vector<int> ans;
    for(int i = 0; i < m; i++) {
        if(b[i]) ans.push_back(i+1);
    }
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << endl;
}