#include <bits/stdc++.h>
using namespace std;

int g1(int k) {
    vector<int> a;
    while(k) {
        a.push_back(k%10);
        k /= 10;
    }
    sort(a.begin(), a.end(), greater<int>());
    int res = 0;
    for(int i : a) {
        res = res*10 + i;
    }
    return res;
}

int g2(int k) {
    vector<int> a;
    while(k) {
        a.push_back(k%10);
        k /= 10;
    }
    sort(a.begin(), a.end());
    int res = 0;
    for(int i : a) {
        res = res*10 + i;
    }
    return res;
}

int f(vector<int> &a, int k) {
    if(a[k]) return a[k];
    a[k] = f(a, k-1);
    return g1(a[k]) - g2(a[k]);
}

int main() {
    int n, k; cin >> n >> k;
    vector<int> a(k+1);
    a[0] = n;
    cout << f(a, k) << endl; 
}