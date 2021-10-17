#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int n = s.size();
    vector<string> x(n);
    for(int i = 0; i < n; i++) {
        x[i] = s;
        char c = s[0];
        s.erase(0, 1);
        s = s + c;
    }
    sort(x.begin(), x.end());
    cout << x[0] << endl;
    cout << x[n-1] << endl;
}