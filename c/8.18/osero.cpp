#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q; cin >> n >> q;
    vector<int> r(q);
    vector<int> l(q);
    vector<int> a(n+1);
    for(int i = 0; i < q; i++) cin >> l[i] >> r[i];
    for(int i = 0; i < q; i++) {
        a[l[i]-1]++;
        a[r[i]]--;
    }
    for(int i = 1; i < n; i++) {
        a[i] += a[i-1];
    }
    string s = "";
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            s += '0';
        } else { 
            s += '1';
        }
    }
    cout << s << endl;
}