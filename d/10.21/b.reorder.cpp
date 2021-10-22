#include <bits/stdc++.h>
using namespace std;

vector<int> func(vector<int> a) {
    map<int, int> mp;
    int n = a.size();
    for(int i = 0; i < n; i++) {
        mp[a[i]] = 0;
    }
    int index = 1;
    for(auto &i : mp) {
        i.second = index++;
    }
    for(int i = 0; i < n; i++) {
        a[i] = mp[a[i]];
    }
    return a;
}

int main() {
    int h, w, n; cin >> h >> w >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    a = func(a);
    b = func(b);
    for(int i = 0; i < n; i++) printf("%d %d\n", a[i], b[i]); 
}