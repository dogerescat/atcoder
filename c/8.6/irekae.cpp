#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a = {1, 2, 3, 4, 5, 6};
    int m = n % 30;
    for(int i = 0; i < m; i++) {
        swap(a[i%5], a[((i+1)%5)+1]);
    }
}