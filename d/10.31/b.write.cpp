#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    map<int, int> m;
    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        m[a]++;
    }
    int ans = 0;
    for(auto i : m) {
       if(i.second % 2 != 0) ans++; 
    }
    cout << ans << endl;
}