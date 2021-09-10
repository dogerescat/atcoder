#include <bits/stdc++.h>
using namespace std;

int main() {
    int sx, sy, tx, ty; cin >> sx >> sy >> tx >> ty;
    tx -= sx;
    ty -= sy;
    string ans = "";
    for(int i = 0; i < ty; i++) ans = ans + 'U';
    for(int i = 0; i < tx; i++) ans = ans + 'R';
    for(int i = ty; i > 0; i--) ans = ans + 'D';
    for(int i = tx; i > 0; i--) ans = ans + 'L';
    ans = ans + 'L';
    for(int i = 0; i < ty+1; i++) ans = ans + 'U';
    for(int i = 0; i < tx+1; i++) ans = ans + 'R';
    ans = ans + 'D';
    ans = ans + 'R';
    for(int i = ty+1; i > 0; i--) ans = ans + 'D';
    for(int i = tx+1; i > 0; i--) ans = ans + 'L';
    ans = ans + 'U';
    cout << ans << endl;
}