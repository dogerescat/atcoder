#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int, int>> red(n);
    vector<pair<int, int>> blue(n);
    for(int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        red[i].first = a;
        red[i].second = b;
    }
    for(int i = 0; i < n; i++) {
        int c, d; cin >> c >> d;
        blue[i].first = c;
        blue[i].second = d;
    }
    sort(red.begin(), red.end());
    sort(blue.begin(), blue.end());
    int cnt = 0;
    vector<bool> check(n, true);
    for(int i = 0; i < n; i++) {
        int w = blue[i].first;
        int h = blue[i].second;
        int t = -1;
        int index = -1;
        for(int j = 0; j < n; j++) {
            if(red[j].first >= w) break;
            if(red[j].second < h && red[j].second > t && check[j]) {
                t = red[j].second;
                index = j;
            }
        }
        if(index != -1) check[index] = false, cnt++;
    }
    cout << cnt << endl;
}