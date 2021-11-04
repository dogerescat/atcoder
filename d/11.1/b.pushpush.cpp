#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    deque<int> que;
    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        if(i % 2 == 0) que.push_front(a);
        else que.push_back(a);
    }
    if(n % 2 == 0) {
        for(int i = 0; i < n; i++) {
            cout << que.back() << " ";
            que.pop_back();
        }
    } else {
        for(int i = 0; i < n; i++) {
            cout << que.front() << " ";
            que.pop_front();
        }
    }
    cout << endl;
}