#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<double, double>> A(n, pair<double, double>());
    for(int i = 0; i < n; i++) {
        int a, b; cin >> a >> b; 
        A[i].first = a;
        A[i].second = b;
    }
    double total = 0;
    double cnt = 0;
    sort(A.begin(), A.end());
    do {
        cnt++;
        for(int i = 0; i < n - 1; i++) {
            double x = A[i].first - A[i + 1].first;
            double y = A[i].second - A[i + 1].second;
            double d = x * x + y * y;
            total += sqrt(d);
        }        
    } while (next_permutation(A.begin(), A.end()));
    cout << fixed << setprecision(10) << total / cnt << endl;
}