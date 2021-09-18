#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    queue<int> que;
    vector<queue<int>> A(m);
    vector<vector<int>> memo(n);
    for(int i = 0; i < m; i++) {
        int k; cin >> k;
        for(int j = 0; j < k; j++) {  
            int b; cin >> b;
            A[i].push(b-1);
        }
        memo[A[i].front()].push_back(i);
    }
    for(int i = 0; i < n; i++) {
        if(memo[i].size() == 2) {
            que.push(i);
        }
    }
    while(!que.empty()) {
        int v = que.front(); que.pop();
        for(auto p : memo[v]) {
            A[p].pop();
            if(!A[p].empty()) {
                memo[A[p].front()].push_back(p);
                if(memo[A[p].front()].size() == 2) {
                    que.push(A[p].front());
                }
            }
        }
    }
    for(int i = 0; i < m; i++) {
        if(!A[i].empty()) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}