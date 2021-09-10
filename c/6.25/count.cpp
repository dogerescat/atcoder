#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> A(n);
    vector<int> P(n);
    vector<int> Q(n);
    for(int i = 0; i < n; i++) cin >> P[i];
    for(int i = 0; i < n; i++) cin >> Q[i];
    iota(A.begin(), A.end(), 1);
    int p; int q;
    int cnt = 0;
    do {
        cnt++;
        if(P == A) {
            p = cnt;
        } 
        if(Q == A) {
            q = cnt;
        }
    } while(next_permutation(A.begin(), A.end()));
    cout << abs(p - q) << endl;
}