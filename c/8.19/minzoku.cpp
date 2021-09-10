#include <bits/stdc++.h>
using namespace std;

void func(vector<int> &a, int d, int deep) {

}

int main() {
    int n, d, k; cin >> n >> d >> k;
    vector<int> L(d);
    vector<int> R(d);
    vector<int> S(k);
    vector<int> T(k);
    vector<int> a(k);
    for(int i = 0; i < d; i++) cin >> L[i] >> R[i];
    for(int i = 0; i < k; i++) cin >> S[i] >> T[i];
    for(int i = 0; i < k; i++) {
        for(int j = 0; j < d; j++) {
            if(L[j] <= S[i] && R[j] >= S[i]) {
                if(L[j] <= T[i] && R[j] >= T[i]) {
                    a[i] = j + 1;
                    break;
                } else {
                    if(abs(L[j] - T[i]) > abs(R[j] - T[i])) S[i] = R[j];
                    else S[i] = L[j];
                }
            } 
        }
    }
    for(int i = 0; i < k; i++) cout << a[i] << endl;
}