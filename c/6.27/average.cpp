#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int,int>> a(n);
    vector<int> index(n);
    iota(index.begin(), index.end(), 0);
    for(int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    long double total = 0;
    do {
        for(int i = 0; i < n-1; i++) {
            long double x = (a[index[i]].first - a[index[i+1]].first);
            long double y = (a[index[i]].second - a[index[i+1]].second);
            total += sqrt(x*x + y*y);
        }
    } while(next_permutation(index.begin(), index.end()));
    for(int i = 1; i <= n; i++) {
        total /= i ;
    }
    cout << fixed << setprecision(10) << total << endl;
}