#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n + 1);  

        for (int i = 0; i < n + 1; i++) {
            cin >> v[i];  
        }

        int lastEle = v[n]; 

        vector<int> firstN(v.begin(), v.begin() + n);
        sort(firstN.begin(), firstN.end());

        for (int i = 0; i < n; i++) {
            if (firstN[i] <= 2 * lastEle) {
                if (lastEle < firstN[i]) {
                    swap(firstN[i], lastEle);
                }
            } else {
                break; 
            }
        }

        int sum = accumulate(firstN.begin(), firstN.end(), 0);
        cout << sum << endl; 
    }

    return 0;
}
