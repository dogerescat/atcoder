#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    set<int> a;
    for(int i = 0; i < 3; i++) {
        a.insert(s[i]);
    }
    int n = a.size();
    if(n == 1) cout << 1 << endl;
    else if(n == 2) cout << 3 << endl;
    else cout << 6 << endl;
}