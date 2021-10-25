#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> p(n);
    vector<int> q(n);
    for(int i = 0; i < n; i++) cin >> p[i];
    for(int i = 0; i < n; i++) cin >> q[i];
    vector<int> x(n);
    iota(x.begin(), x.end(), 1);
    int a = 0, b = 0;
    int cnt = 0;
    do {
       cnt++;
       if(x == p) a = cnt;
       if(x == q) b = cnt;
    } while(next_permutation(x.begin(), x.end()));
    cout << abs(a - b) << endl;
}