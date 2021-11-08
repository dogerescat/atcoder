#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int k; cin >> s >> k;
    vector<string> a;
    int n = s.size();
    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= k; j++) {
            string subs = s.substr(i, j);
            a.push_back(subs);
        }
    }
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    cout << a[k-1] << endl;
}