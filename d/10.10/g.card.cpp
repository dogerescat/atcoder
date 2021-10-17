#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    map<int, int> m;
    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        m[a]++;
    }
    if(m.size() % 2 == 0) {
        cout << m.size() - 1 << endl;
    } else {
        cout << m.size() << endl;
    }
}