#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >>n;
    set<int> a;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        a.insert(x);
    }
    if(n == a.size()) cout << "YES" << endl;
    else cout << "NO" << endl;
}