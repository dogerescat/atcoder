#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(1 << n);
    for(int i = 0; i < 1 << n; i++) cin >> a[i];
    vector<int> arry(1 << n);
    iota(arry.begin(), arry.end(), 0);
    for(int i = 1; i <= n; i++) {
        vector<int> next_arry;
        for(int j = 0; j < 1 << (n - i); j++) {
            if(a[arry[2*j]] > a[arry[2*j+1]]) next_arry.push_back(arry[2*j]);
            else next_arry.push_back(arry[2*j+1]);
        }
        if(i == n) {
            cout << 1 + (next_arry[0] == arry[0] ? arry[1] : arry[0]) << endl;;
            return 0;
        }
        arry = next_arry;
    }
}