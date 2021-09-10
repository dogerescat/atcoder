#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> d(n);
    for(int i = 0; i < n; i++) cin >> d[i];
    sort(d.begin(), d.end());
    int r = d.size()/2;
    int l = r-1;
    cout << d[r] - d[l] << endl;
}