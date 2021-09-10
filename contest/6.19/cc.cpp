#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    map<string, int> a;
    for(int i = 0; i < n; i++) {
        string s; cin >> s;
        if(a[s]) a[s]++;
        else {
            a.insert(make_pair(s, 1));
        }
    }
    int ans = 0;
    for(auto i : a) {
        // cout <<  << endl;
        ans = i.second * (n - i.second);
    }
    cout << ans / 2 << endl;
}