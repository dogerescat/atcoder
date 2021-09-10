#include <bits/stdc++.h>
using namespace std;

int main() {
    int L, Q; cin >> L >> Q;
    vector<int> c(Q);
    vector<int> x(Q);
    for(int i = 0; i < Q; i++) cin >> c[i] >> x[i];
    set<int> s;
    s.insert(L);
    s.insert(0);
    for(int i = 0; i < Q; i++) {
        if(c[i] == 1) {
            s.insert(x[i]);
        } else {
            auto j = upper_bound(s.begin(), s.end(), x[i]);
            if(distance(s.begin(), j) > 1) {
                auto k = --j;
                cout << *j - *k<< endl;
            } else {
                j++;
                cout << *j << endl;
            }
        }
    }
}