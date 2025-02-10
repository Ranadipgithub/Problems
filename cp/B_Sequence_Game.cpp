#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> a, int b) {
    int n = a.size();
    if (n == 0) return true;

    int prev = min(a[0], b - a[0]);
    for (int i = 1; i < n; ++i) {
        int orig = a[i];
        int flip = b - a[i];
        
        bool co = (orig >= prev);
        bool cf = (flip >= prev);
        
        if (!co && !cf) {
            return false;
        }
        
        if (co && cf) {
            prev = min(orig, flip);
        } else if (co) {
            prev = orig;
        } else {
            prev = flip;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int b_val;
        cin >> b_val;

        if (solve(a, b_val)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}