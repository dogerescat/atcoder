#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, q; 
    cin >> n >> k >> q;
    vector<int> a(q);
    vector<int> p(n, k);
    for(int i = 0; i < q; i++) cin >> a[i];
    for(int i = 0; i < q; i++) {
        p[a[i]-1]++;
    }
    for(int i = 0; i < p.size(); i++) {
        if((p[i] - q) <= 0) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
}