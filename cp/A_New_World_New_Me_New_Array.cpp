#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k, p;
        cin >> n >> k >> p;

        if (p == 0) {
            cout << -1 << endl;
            continue;
        }
        
        if (k > n * p || k < n * (-p)) {
            cout << -1 << endl;
            continue;
        }

        int div = abs(k / p);
        int rem = abs(k % p);

        if (rem > 0) {
            cout << div + 1 << endl;
        } else {
            cout << div << endl;  
        }
    }
    
    return 0;
}
