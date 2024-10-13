#include <bits/stdc++.h>
using namespace std;

vector<int> findPrime(int n) {
    int l = (n < 100) ? 600 : n * log(n) * 1.5; 
    vector<bool> ip(l + 1, true);
    vector<int> p;

    ip[0] = ip[1] = false;

    for (int i = 2; i * i <= l; i++) {
        if (ip[i]) {
            // cout<<i<<j<<endl;
            for (int j = i * i; j <= l; j += i) {
                // cout<<"When i*i and j inside for loop"<<i<<j<<endl;
                ip[j] = false;
            }
        }
    }

    for (int i = 2; p.size() < n && i <= l; i++) {
        if (ip[i]) {
            cout<<i<<endl;
            p.push_back(i);
        }
    }

    return p;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        // cout << "N: " << n << " M: " << m << endl;

        vector<int> p = findPrime(n * m);
        vector<vector<int>> ans(n, vector<int>(m, 0));

        int pi = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                ans[i][j] = p[pi];
                pi++;
            }
        }

        for (const auto& row : ans) {
            for (int prime : row) {
                cout << prime << " ";
            }
            cout << endl;
        }
    }

    return 0;
}