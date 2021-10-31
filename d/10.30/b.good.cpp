#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int n; cin >> n; 
    map<int, int> m;
    for(int i = 0; i < n; i++) {
       int a; cin >> a;
       m[a]++; 
    }
    ll ans = 0;
    for(auto i : m) {
        if(i.first > i.second) ans += i.second;
        else if(i.first < i.second) ans += i.second - i.first;
    }
    cout << ans << endl;
}