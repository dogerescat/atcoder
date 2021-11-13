#include <bits/stdc++.h>
using namespace std;

int main() {
    int sx, sy, tx, ty; cin >> sx >> sy >> tx >> ty;
    int x = abs(sx - tx);
    int y = abs(sy - ty);
    string ans1 = "";
    for(int i = 0; i < x; i++) ans1 += 'R';
    for(int i = 0; i < y; i++) ans1 += 'U';
    string ans2 = "";
    for(int i = 0; i < x; i++) ans2 += 'L';
    for(int i = 0; i < y; i++) ans2 += 'D';
    string ans3 = "DR" + ans1 + "UL";
    string ans4 = "UL" + ans2 + "DR";
    string ans = ans1 + ans2 + ans3 + ans4;
    cout << ans << endl;
}