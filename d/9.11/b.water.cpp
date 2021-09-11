#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, w; cin >> n >> w;
    vector<int> s(n);
    vector<int> t(n);
    vector<int> p(n);
    for(int i = 0; i < n; i++) {
        cin >> s[i] >> t[i] >> p[i];
    } 
    vector<ll> a(200001);
    for(int i = 0; i < n; i++) {
        a[s[i]] += p[i];
        a[t[i]] -= p[i];
    }
    for(int i = 1; i < 200001; i++) {
        a[i] += a[i-1];
    }
    for(auto i : a) {
        if(i > w) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}