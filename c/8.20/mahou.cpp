#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    set<int> s;
    for(int i = 0; i < n; i++) {
        while(a[i] % 2 == 0) {
            a[i] /= 2;
        }
        s.insert(a[i]);
    }
    cout << s.size() << endl;
}